#define PI 3.14159265
__kernel void dft(
    int n,
    __global const int * samples,
    __global double * amplitudes
)
{
    int f = get_global_id(0);
    double re = 0;
    double im = 0;
    for (int t = 0; t < n-1; t++)
    {
        re += samples[t] * cos((float)(2 * PI * f * t / n));
        im -= samples[t] * sin((float)(2 * PI * f * t / n));
    }
    amplitudes[f] = sqrt((float)((re * re) + (im * im)));
}