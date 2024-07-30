#pragma once
#include "Sample.h"

class StatisticalSample : public Sample
{
private:
	vector<double> data;
public:
	vector<double> getData() const override;
	void setData(vector<double> data);

	double getMinValue() const override;
	double getMaxValue() const override;
	map<int, double> getQuartile();
	double getMedian();
	double getAverage() const override;
	double getDispersion();
	double getAsymmetry();
	double getExcess();
	bool isNormal();
};


ostream& operator<<(ostream& os, const StatisticalSample& sample);
double coeffInterconnection(StatisticalSample& sample1, StatisticalSample& sample2);
void incorrectInput();
