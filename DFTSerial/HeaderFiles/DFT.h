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
        double re = 0;
        double im = 0;
        for (int f = 0; f < n-1; f++)
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
};