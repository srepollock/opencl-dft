#include <iostream>
#include <cstdio>
#include <ctime>
#include "DFT.h"
#include "Samples.h"
int main(int argc, char ** argv)
{
    std::clock_t start;
    double duration;

    std::cout << "Running DFT serially on a 4 second audio clip with 32, 000 samples" << std::endl;

    start = std::clock();

    DFT *dft = new DFT();
    double* amps = dft->runDFT(largeAudioSamples, 32000);

    duration = ( std::clock() - start ) / (double) CLOCKS_PER_SEC;

    for (int i = 0; i < 32000; i++)
    {
        std::cout << amps[i] << std::endl;
    }

    std::cout<<"printf: "<< duration <<'\n';
}