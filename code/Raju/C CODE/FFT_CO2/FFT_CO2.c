/*
 * fft_co2.c
 *
 * Code generation for function 'fft_co2'
 *
 * C source code generated on: Mon Aug 24 08:57:06 2015
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "fft_co2.h"

/* Function Definitions */
real_T fft_co2(const real_T X[64])
{
  real_T snrdB;
  real_T dv0[64];
  real_T absFFT_sampled_data[64];
  int32_T ix;
  int32_T i0;
  real_T FFT_sampled_data[64];
  real_T mtmp;
  boolean_T exitg1;
  real_T y;

  /*  fft_co2: - returns the noise amount in Decibel contained in time domain input signal. */
  /*  Syntax: snrdB= fft_co2(X) */
  /*  */
  /*  Inputs: */
  /*     X          - Time domain input signal */
  /*  */
  /*  Outputs: */
  /*     snrdB      - Noise amount in Decibel */
  /*  */
  /* ------------- BEGIN CODE -------------- */
  /*  If the length of X is greater than n, the sequence X is truncated. */
  /*  j   = sqrt(-1); */
  /* DFT Matrix */
  for (ix = 0; ix < 64; ix++) {
    dv0[ix] = 0.0;
    for (i0 = 0; i0 < 64; i0++) {
      dv0[ix] = rtNaN;
    }

    FFT_sampled_data[ix] = 0.015625 * dv0[ix];
    absFFT_sampled_data[ix] = FFT_sampled_data[ix];
  }

  mtmp = absFFT_sampled_data[0];
  if (rtIsNaN(absFFT_sampled_data[0])) {
    ix = 2;
    exitg1 = FALSE;
    while ((exitg1 == FALSE) && (ix < 65)) {
      if (!rtIsNaN(absFFT_sampled_data[ix - 1])) {
        mtmp = absFFT_sampled_data[ix - 1];
        exitg1 = TRUE;
      } else {
        ix++;
      }
    }
  }

  y = absFFT_sampled_data[0];
  for (ix = 0; ix < 63; ix++) {
    y += absFFT_sampled_data[ix + 1];
  }

  snrdB = 10.0 * log10(mtmp / ((y - mtmp) / 63.0));

  /* ------------- END OF CODE -------------- */
  return snrdB;
}

/* End of code generation (fft_co2.c) */
