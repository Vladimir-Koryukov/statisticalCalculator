#pragma once
#include "RandomFilling.h"
class UniformSample : public RandomFilling//равномерное распределение 
{
public:
	vector<double> generate(int lengthSample) override;
};
