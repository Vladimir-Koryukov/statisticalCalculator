#include "StatisticalSample.h"

vector<double> StatisticalSample::getData() const
{
	return data;
}

void StatisticalSample::setData(vector<double> data)
{
	this->data = data;
}

ostream& operator<<(ostream& os, const StatisticalSample& sample)
{
    for (int i = 0; i < sample.getData().size(); i++)
    {
        os << sample.getData()[i] << " ";
    }
    return os;
}

double StatisticalSample::getMinValue() const //минимальное значение выборки
{
    return *min_element(data.begin(), data.end());    
}

double StatisticalSample::getMaxValue() const //максимальное значение выборки
{
    return *max_element(data.begin(), data.end());
}

map<int, double> StatisticalSample::getQuartile()//квартили
{
    sort(data.begin(), data.end());
    map<int, double> quartiles;
    quartiles[1] = data[((data.size() + 1) / 4 - 1)];
    quartiles[2] = getMedian();
    quartiles[3] = data[(3 * (data.size() + 1) / 4 - 1)];
    return quartiles;
}

double StatisticalSample::getMedian()
{
    sort(data.begin(), data.end());
    if (data.size() % 2 == 1)
    {
        return data[data.size() / 2];
    }
    else
    {
        return (data[data.size() / 2 - 1] + data[data.size() / 2]) / 2.0;
    }
}

double StatisticalSample::getAverage() const //среднее значение выборки 
{
    return accumulate(data.begin(), data.end(), 0) / data.size();
}

double StatisticalSample::getDispersion() //дисперсия
{
    double sumDiv = 0;
    for (double value : data) 
    {
        sumDiv += pow(value - getAverage(), 2);
    }
    return  sumDiv / data.size();
}

double StatisticalSample::getAsymmetry() //коэффициенты асимметрии
{
    double average = getAverage();
    double dispersion = getDispersion();
    double sumCubedDiff = 0;
    for (double value : data)
    {
        sumCubedDiff += pow(value - average, 3);
    }
    return sumCubedDiff / (pow(sqrt(dispersion), 3) * data.size());
}

double StatisticalSample::getExcess() //эксцесс
{
    double average = getAverage();
    double dispersion = getDispersion();
    double sumFourthDiff = 0;
    for (double value : data)
    {
        sumFourthDiff += pow(value - average, 4);
    }
    return sumFourthDiff / (pow(sqrt(dispersion), 4) * data.size()) - 3.0;
}

bool StatisticalSample::isNormal() //тест на нормальность на основе критерия асимметрии и эксцесса
{
    if ((abs(getMinValue() - getAverage()) < 3 * sqrt(getDispersion())) && (abs(getMaxValue() - getAverage()) < 3 * sqrt(getDispersion()))) 
    {
        if (abs(getAsymmetry()))
        {
            if (abs(getExcess()))
            {
                return true;
            }
        }
    }
    return false;
}

double coeffInterconnection(StatisticalSample& firstSample, StatisticalSample& secondSample)
{
    double s = 0;
    double average1 = firstSample.getAverage();
    double average2 = secondSample.getAverage();
    for (int i = 0; i < firstSample.getData().size(); i++)
    {
        s += (firstSample.getData()[i] - average1) * (secondSample.getData()[i] - average2);
    }
    return s / (sqrt(firstSample.getDispersion()) * sqrt(secondSample.getDispersion()) * firstSample.getData().size());
}

void incorrectInput() // обработка случая некорректного ввода
{
    cin.clear();
    while (cin.get() != '\n')
    {
        continue;
    }
    cout << "Некорректный ввод \nПовторите..." << endl;
}
