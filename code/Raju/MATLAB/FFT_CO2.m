function snrdB = fft_co2(x) 
    N=64;
%     FFT
    FFT_sampled_data=fft(x,64); 
%     Absolute
    absFFT_sampled_data=abs(FFT_sampled_data)
%     Maximum
    signal_value=max(absFFT_sampled_data);
%     noise mean
    noise_mean=(sum(absFFT_sampled_data)-signal_value)/(N-1)  
%     snrVal
    snrVal=signal_value/noise_mean;
%     snrDB
    snrdB=10*log10(snrVal); 
end

%------------- END OF CODE --------------
