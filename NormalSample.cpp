#include "NormalSample.h"
#include<random>
vector<double> NormalSample::generate(int lengthSample)
{
    vector<double> sample;
    random_device rd;
    mt19937 gen(rd());
    normal_distribution<double> distantion(0.0, 100.0);
    for (int i = 0; i < lengthSample; i++)
    {
        sample.push_back(distantion(gen));
    }
    return sample;
}
