#pragma once
#include "RandomFilling.h"
class NormalSample : public RandomFilling//нормальное распределение
{
public:
	vector<double> generate(int lengthSample) override;
};

