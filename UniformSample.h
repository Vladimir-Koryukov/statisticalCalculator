#pragma once
#include "RandomFilling.h"
class UniformSample : public RandomFilling//����������� ������������� 
{
public:
	vector<double> generate(int lengthSample) override;
};
