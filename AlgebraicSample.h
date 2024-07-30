#pragma once
#include "Sample.h"

class AlgebraicSample : public Sample
{
private:
	vector<double> data;
public:
	vector<double> getData() const override;
	double getMinValue() const override;
	double getMaxValue() const override;
	double getAverage() const override;
};

