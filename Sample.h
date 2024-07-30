#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>
#include <cmath>

using namespace std;

class Sample
{
public:
	virtual vector<double> getData() const = 0;
	virtual double getMinValue() const = 0;
	virtual double getMaxValue() const = 0;
	virtual double getAverage() const = 0;
};

