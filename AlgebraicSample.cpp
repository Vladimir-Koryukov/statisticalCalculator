#include "AlgebraicSample.h"

vector<double> AlgebraicSample::getData() const
{
    return data;
}

double AlgebraicSample::getMinValue() const //����������� �������� �������
{
    return *min_element(data.begin(), data.end());
}

double AlgebraicSample::getMaxValue() const //������������ �������� �������
{
    return *max_element(data.begin(), data.end());
}

double AlgebraicSample::getAverage() const //������� �������� ������� 
{
    return accumulate(data.begin(), data.end(), 0) / data.size();
}