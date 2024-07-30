#include "AlgebraicSample.h"

vector<double> AlgebraicSample::getData() const
{
    return data;
}

double AlgebraicSample::getMinValue() const //минимальное значение выборки
{
    return *min_element(data.begin(), data.end());
}

double AlgebraicSample::getMaxValue() const //максимальное значение выборки
{
    return *max_element(data.begin(), data.end());
}

double AlgebraicSample::getAverage() const //среднее значение выборки 
{
    return accumulate(data.begin(), data.end(), 0) / data.size();
}