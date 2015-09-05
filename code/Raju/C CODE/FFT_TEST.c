#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
 
/* function declaration */
double FFT(float x[]);

int main ()
{
   /* an int array with 5 elements */
   float x[]= {
   1849,1757,1845,1960,2103,2075,2135,2165,2412,2666,2985,3299,3589,3948,4328,4778,5313,5761,6285,6719,7186,7812,8392,8997,9381,9846,10268,10835,11421,
   11848,12313,12597,13073,13493,14114,14335,14694,14975,15398,15654,16030,16258,16627,16845,17036,17396,17715,17846,18090,18272,18398,18722,19017,19161,
   19390,19464,19675,19881,20132,20349,20454,20527,20583,20808
     };
  
   double snrDB;

   /* pass pointer to the array as an argument */
   snrDB = FFT( x ) ;
 
   /* output the returned value */
   printf( "Signal to Noise ratio present : %f ", snrDB );
    
   return 0;
   getch();
}
double FFT(float x[])
{
  
	int N=64;
	int i = 1;
	int n,k,a,b;                     // time and frequency domain indices
	int to_sin = 3*N/4; // index offset for sin
	double PI2 = 6.2832,signal_value,temp_im,noise_mean,snr_value,snrdB;
	float Xre[N/2+1], Xim[N/2+1]; // DFT of x (real and imaginary parts)
	float absFFT[N/2+1]; 
	 
	// Twiddle factors (64th roots of unity)
	const float W[] = {
	     1.00000, 0.99518, 0.98079, 0.95694, 0.92388, 0.88192, 0.83147, 0.77301,
	     0.70711, 0.63439, 0.55557, 0.47139, 0.38268, 0.29028, 0.19509, 0.09801,
	    -0.00000,-0.09802,-0.19509,-0.29029,-0.38269,-0.47140,-0.55557,-0.63440,
	    -0.70711,-0.77301,-0.83147,-0.88192,-0.92388,-0.95694,-0.98079,-0.99519,
	    -1.00000,-0.99518,-0.98078,-0.95694,-0.92388,-0.88192,-0.83146,-0.77300,
	    -0.70710,-0.63439,-0.55556,-0.47139,-0.38267,-0.29027,-0.19508,-0.09801,
	     0.00001, 0.09803, 0.19510, 0.29030, 0.38269, 0.47141, 0.55558, 0.63440,
	     0.70712, 0.77302, 0.83148, 0.88193, 0.92388, 0.95694, 0.98079, 0.99519
	};
	
	for (k=0 ; k<=N/2 ; ++k)
	    {
	        Xre[k] = 0; Xim[k] = 0;
	        a = 0; b = to_sin;
	        for (n=0 ; n<N ; ++n)
	        {
	            Xre[k] += x[n] * W[a%N];
	            Xim[k] -= x[n] * W[b%N];
	            a += k; b += k;
	        }
	        absFFT[k] = sqrt(Xre[k]*Xre[k] + Xim[k]*Xim[k])/64;
	        //printf("%f\n",absFFT[k]);
	    }

     //Finding signal_value
	 signal_value = absFFT[0];
	 for(i=0; i<=N/2; i++)
	  {
	    if(signal_value < absFFT[i])
	    {
	      signal_value = absFFT[i];	      
	    }
	  }	  
	
	//Finding noise_mean
	 temp_im = absFFT[0];
     for (k = 0; k <= N/2; k++) {
       temp_im += absFFT[k + 1];
     }
     noise_mean= (temp_im-signal_value)/(N-1);
     
	 // Finding snr Value
	 snr_value=signal_value/noise_mean;
	 	 
	 //snr in DB
	 snrdB = 10.0 * log10(snr_value);
		 
	 return snrdB;		
	
}

