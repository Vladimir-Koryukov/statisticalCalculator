#pragma once
#include "RandomFilling.h"
class NormalSample : public RandomFilling//���������� �������������
{
public:
	vector<double> generate(int lengthSample) override;
};

