#pragma once
#include <math.h>
#define PI 3.14159265
class DFT
{
public:
    DFT()
    {

    }
    double* runDFT(int *s, int n)
    {
        double *amp = new double[n];
        double temp;
        double re;
        double im;
        for (int f = 0; f < n-1; f++)
        {
            for (int t = 0; t < n-1; t++)
            {
                re += cos(2 * PI * f * t / n);
                im -= sin(2 * PI * f * t / n);
            }
            amp[f] = sqrt((re * re) + (im * im));
        }
        return amp;
    }
};