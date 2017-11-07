/**
    Result is the real number
*/
#define PI 3.14159265
__kernel void calculateDFTAtIndex(__global const int * start,
                                __global const int * end,
                                __global const int * n,
                                __glboal const int * samples,
                                __global const double * amp) 
{
        double re = 0;
        double im = 0;
        for (int f = start; f < end; f++)
        {
            for (int t = 0; t < n-1; t++)
            {
                re += s[t] * cos(2 * PI * f * t / n);
                im -= s[t] * sin(2 * PI * f * t / n);
            }
            amp[f] = sqrt((re * re) + (im * im));
        }
        return amp;
}