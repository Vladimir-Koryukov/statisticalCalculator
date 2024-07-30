#include "UniformSample.h"
#include<random>

vector<double> UniformSample::generate(int lengthSample)
{
    vector<double> sample;
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> distantion(0.0, 100.0);
    for (int i = 0; i < lengthSample; i++)
    {
        sample.push_back(distantion(gen));
    }
    return sample;
}