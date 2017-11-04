/**
    Result is the real number
*/
#define PI 3.14159265
__kernel void realNumber(__global const int *samples,
                        __global const int *f,
                        __global const int *t,
                        __global const int *n,
                        __global float *result
                        )
{
    *result += samples[t] * cos(2 * PI * (*f) * (*t) / (*n));
}
__kernel void imaginaryNumber(__gloabl const int *samples,
                        __global const int *f,
                        __global const int *t,
                        __global const int *n,
                        __global float *result
                        )
{
    *result -= samples[t] * sin(2 * PI * (*f) * (*t) / (*n));
}
__kernel void amplitudeAtIndex(__global const double *real,
                            __global const double *imaginary,
                            __global const int *f,
                            __global double *amp)
{
    amp[*f] = sqrt(((*real) * (*real) + ((*imaginary) * (*imaginary))));
}