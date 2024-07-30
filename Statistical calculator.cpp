#include <iostream>
#include "StatisticalSample.h"
#include "UniformSample.h"
#include "NormalSample.h"
#include <fstream>
#include <string>

using namespace std;
	
int main()
{
	setlocale(LC_ALL, "");
	StatisticalSample firstSample;
	StatisticalSample secondSample;
	StatisticalSample thirdSample;
	vector<double> firstData;
	vector<double> secondData;
	vector<double> thirdData;
	int lengthSample;

	int button;
	int choice;

	do
	{
		cout << "Нажмите клавишу для последующего действия:" << endl; //меню выбора операции
		cout << "1 - Сформировать случайную выборку(равномерное распределение)" << endl;
		cout << "2 - Сформировать случайную выборку(нормальное распределение)" << endl;
		cout << "3 - Ввести данные вручную" << endl;
		cout << "4 - Считать выборку из файла" << endl;
		cout << "5 - Вывести выборку" << endl;
		cout << "6 - Вычисление минимума выборки" << endl;
		cout << "7 - Вычисление максимума выборки" << endl;
		cout << "8 - Вычисление квартили выборки" << endl;
		cout << "9 - Вычисление медианы выборки" << endl;
		cout << "10 - Вычисление среднего арифметического значения выборки" << endl;
		cout << "11 - Вычисление дисперсии выборки" << endl;
		cout << "12 - Вычисление коэффициента асимметрии выборки" << endl;
		cout << "13 - Вычисление эксцесса выборки" << endl;
		cout << "14 - Тест на нормальность выборки" << endl;
		cout << "15 - Оценка взаимосвязи двух показателей" << endl;
		cout << "16 - Выход из программы" << endl;

		cin >> button;
		switch (button)
		{
		case 1: //Сформировать случайную выборку(равномерное распределение)
		{
			cout << "Хотите ввести данные для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (!firstData.empty())
				{
					firstData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				UniformSample uniformGenerator;
				vector<double> firstData = uniformGenerator.generate(lengthSample);
				firstSample.setData(firstData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 2)
			{
				if (!secondData.empty()) 
				{
					secondData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				UniformSample uniformGenerator;
				vector<double> secondData = uniformGenerator.generate(lengthSample);
				secondSample.setData(secondData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 3)
			{
				if (!thirdData.empty())
				{
					thirdData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				UniformSample uniformGenerator;
				vector<double> thirdData = uniformGenerator.generate(lengthSample);
				thirdSample.setData(thirdData);
				cout << "Данные успешно добавлены" << endl;
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 2: //Сформировать случайную выборку(нормальное распределение)
		{
			cout << "Хотите ввести данные для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (!firstData.empty())
				{
					firstData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				NormalSample normalGenerator;
				vector<double> firstData = normalGenerator.generate(lengthSample);
				firstSample.setData(firstData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 2)
			{
				if (!secondData.empty())
				{
					secondData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				NormalSample normalGenerator;
				vector<double> secondData = normalGenerator.generate(lengthSample);
				secondSample.setData(secondData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 3)
			{
				if (!thirdData.empty())
				{
					thirdData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				NormalSample normalGenerator;
				vector<double> thirdData = normalGenerator.generate(lengthSample);
				thirdSample.setData(thirdData);
				cout << "Данные успешно добавлены" << endl;
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}
		
		case 3: //Ввести данные вручную
		{
			double manualInput;
			cout << "Хотите ввести данные для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (!firstData.empty())
				{
					firstData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				for (int i = 0; i < lengthSample; i++)
				{
					cout << "Введите " << i + 1 << " элемент" << endl;
					cin >> manualInput;
					while (cin.fail()) //проверка входных данных
					{
						incorrectInput();
						cin >> manualInput;
					}
					firstData.push_back(manualInput);
				}
				firstSample.setData(firstData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 2)
			{
				if (!secondData.empty()) 
				{
					secondData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				for (int i = 0; i < lengthSample; i++)
				{
					cout << "Введите " << i + 1 << " элемент" << endl;
					cin >> manualInput;
					while (cin.fail()) //проверка входных данных
					{
						incorrectInput();
						cin >> manualInput;
					}
					secondData.push_back(manualInput);
				}
				secondSample.setData(secondData);
				cout << "Данные успешно добавлены" << endl;
			}
			else if (choice == 3)
			{
				if (!thirdData.empty())
				{
					thirdData.clear();
				}
				cout << "Из скольких элементов должна состоять выборка? Укажите число больше либо равно 1." << endl;
				cin >> lengthSample;
				while (cin.fail() || lengthSample < 1) //проверка входных данных
				{
					incorrectInput();
					cin >> lengthSample;
				}
				for (int i = 0; i < lengthSample; i++)
				{
					cout << "Введите " << i + 1 << " элемент" << endl;
					cin >> manualInput;
					while (cin.fail()) //проверка входных данных
					{
						incorrectInput();
						cin >> manualInput;
					}
					thirdData.push_back(manualInput);
				}
				thirdSample.setData(thirdData);
				cout << "Данные успешно добавлены" << endl;
			}
			else 
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 4: //Считать выборку из файла
		{
			ifstream fin;
			string path;
			cout << "Введите путь к файлу или имя файла" << endl;
			cin >> path;
			fin.open(path); // окрываем файл для чтения
			double element;
			cout << "Хотите ввести данные для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (!firstData.empty()) 
				{
					firstData.clear();
				}				
				if (fin.is_open())
				{
					while (fin >> element)
					{
						firstData.push_back(element);
					}
				}
				else
				{
					cout << "Не удалось открыть файл" << endl;
				}
				fin.close();
				firstSample.setData(firstData);
			}
			else if (choice == 2)
			{
				if (!secondData.empty()) 
				{
					secondData.clear();
				}
				if (fin.is_open())
				{
					while (fin >> element)
					{
						secondData.push_back(element);
					}
				}
				else
				{
					cout << "Не удалось открыть файл" << endl;
				}
				fin.close();
				secondSample.setData(secondData);
			}
			else if (choice == 3)
			{
				if (!thirdData.empty())
				{
					thirdData.clear();
				}
				if (fin.is_open())
				{
					while (fin >> element)
					{
						thirdData.push_back(element);
					}
				}
				else
				{
					cout << "Не удалось открыть файл" << endl;
				}
				fin.close();
				thirdSample.setData(thirdData);
			}
			else 
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 5: //Вывести выборку
		{
			cout << "Хотите вывести данные первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{			
				if (firstSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Первая выборка: " << firstSample << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Вторая выборка: " << secondSample << endl;
				}
				break;
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Третья выборка: " << thirdSample << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}
		
		case 6: //Вычисление минимума выборки
		{
			cout << "Хотите найти минимум первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Минимум первой выборки: " << firstSample.getMinValue() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Минимум второй выборки: " << secondSample.getMinValue() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Минимум третьей выборки: " << thirdSample.getMinValue() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}
		
		case 7: //Вычисление максимума выборки
		{
			cout << "Хотите найти максимум первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Максимум первой выборки: " << firstSample.getMaxValue() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Максимум второй выборки: " << secondSample.getMaxValue() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Максимум третьей выборки: " << thirdSample.getMaxValue() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 8: //Вычисление квартили выборки
		{
			cout << "Хотите найти квартили первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Первая квартиль первой выборки: " << firstSample.getQuartile()[1] << endl;
					cout << "Вторая квартиль первой выборки: " << firstSample.getQuartile()[2] << endl;
					cout << "Третья квартиль первой выборки: " << firstSample.getQuartile()[3] << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Первая квартиль второй выборки: " << secondSample.getQuartile()[1] << endl;
					cout << "Вторая квартиль второй выборки: " << secondSample.getQuartile()[2] << endl;
					cout << "Третья квартиль второй выборки: " << secondSample.getQuartile()[3] << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Первая квартиль третьей выборки: " << thirdSample.getQuartile()[1] << endl;
					cout << "Вторая квартиль третьей выборки: " << thirdSample.getQuartile()[2] << endl;
					cout << "Третья квартиль третьей выборки: " << thirdSample.getQuartile()[3] << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 9: //Вычисление медианы выборки
		{
			cout << "Хотите найти медиану для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Медиана первой выборки: " << firstSample.getMedian() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Медиана второй выборки: " << secondSample.getMedian() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Медиана третьей выборки: " << thirdSample.getMedian() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 10: //Вычисление среднего арифметического значения выборки
		{
			cout << "Хотите найти среднее арифметическое значение для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Среднее арифметическое первой выборки: " << firstSample.getAverage() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Среднее арифметическое второй выборки: " << secondSample.getAverage() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Среднее арифметическое третьей выборки: " << thirdSample.getAverage() << endl;
				}
			}
			else 
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 11: //Вычисление дисперсии выборки
		{
			cout << "Хотите найти дисперсию для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Дисперсия первой выборки: " << firstSample.getDispersion() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else 
				{
					cout << "Дисперсия второй выборки: " << secondSample.getDispersion() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Дисперсия третьей выборки: " << thirdSample.getDispersion() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 12: //Вычисление коэффициента асимметрии выборки
		{
			cout << "Хотите найти коэффициент асимметрии для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Коэффициент асимметрии первой выборки: " << firstSample.getAsymmetry() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Коэффициент асимметрии второй выборки: " << secondSample.getAsymmetry() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Коэффициент асимметрии третьей выборки: " << thirdSample.getAsymmetry() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 13: //Вычисление эксцесса выборки
		{
			cout << "Хотите найти эксцесс для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Эксцесс первой выборки: " << firstSample.getExcess() << endl;
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Эксцесс второй выборки: " << secondSample.getExcess() << endl;
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					cout << "Эксцесс третьей выборки: " << thirdSample.getExcess() << endl;
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 14: //Тест на нормальность выборки
		{
			cout << "Хотите провести тест на нормальность для первой, второй или третьей выборки? Ответ укажите цифрой." << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 1)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					if (firstSample.isNormal())
					{
						cout << "Гипотеза о нормальности для первой выборки принимается" << endl;
					}
					else
					{
						cout << "Гипотеза о нормальности для первой выборки не принимается" << endl;
					}
				}
			}
			else if (choice == 2)
			{
				if (secondSample.getData().empty()) 
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					if (secondSample.isNormal())
					{
						cout << "Гипотеза о нормальности для второй выборки принимается" << endl;
					}
					else
					{
						cout << "Гипотеза о нормальности для второй выборки не принимается" << endl;
					}
				}
			}
			else if (choice == 3)
			{
				if (thirdSample.getData().empty())
				{
					cout << "Выборка пуста" << endl;
				}
				else
				{
					if (thirdSample.isNormal())
					{
						cout << "Гипотеза о нормальности для третьей выборки принимается" << endl;
					}
					else
					{
						cout << "Гипотеза о нормальности для третьей выборки не принимается" << endl;
					}
				}
			}
			else
			{
				cout << "Вы ввели некорректное значение" << endl;
			}
			break;
		}

		case 15: //Оценка взаимосвязи двух показателей
		{
			cout << "Оценка взаимосвязи каких выборок нужна? Введите число в соответствии с меню." << endl;
			cout << "12 - первой и второй выборки" << endl;
			cout << "13 - первой и третьей выборки" << endl;
			cout << "23 - второй и третьей выборки" << endl;
			cin >> choice;
			while (cin.fail()) //проверка входных данных
			{
				incorrectInput();
				cin >> choice;
			}

			if (choice == 12)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка 1 пуста" << endl;
				}
				else if (secondSample.getData().empty())
				{
					cout << "Выборка 2 пуста" << endl;
				}
				else if (firstSample.getData().size() != secondSample.getData().size())
				{
					cout << "Выборки должны быть равного размера!" << endl;
				}
				else
				{
					if (coeffInterconnection(firstSample, secondSample) == 1)
					{
						cout << "Между выборками положительная линейная связь" << endl;
					}
					else if (coeffInterconnection(firstSample, secondSample) == -1)
					{
						cout << "Между выборками отрицательная линейная связь" << endl;
					}
					else if (coeffInterconnection(firstSample, secondSample) > -0.1 && coeffInterconnection(firstSample, secondSample) < 0.1)
					{
						cout << "Между выборками нет связи" << endl;
					}
					else
					{
						cout << "Коэффициент Пирсона: " << coeffInterconnection(firstSample, secondSample) << endl;
					}
				}
			}
			if (choice == 13)
			{
				if (firstSample.getData().empty())
				{
					cout << "Выборка 1 пуста" << endl;
				}
				else if (thirdSample.getData().empty())
				{
					cout << "Выборка 2 пуста" << endl;
				}
				else if (firstSample.getData().size() != thirdSample.getData().size())
				{
					cout << "Выборки должны быть равного размера!" << endl;
				}
				else
				{
					if (coeffInterconnection(firstSample, thirdSample) == 1)
					{
						cout << "Между выборками положительная линейная связь" << endl;
					}
					else if (coeffInterconnection(firstSample, thirdSample) == -1)
					{
						cout << "Между выборками отрицательная линейная связь" << endl;
					}
					else if (coeffInterconnection(firstSample, thirdSample) > -0.1 && coeffInterconnection(firstSample, thirdSample) < 0.1)
					{
						cout << "Между выборками нет связи" << endl;
					}
					else
					{
						cout << "Коэффициент Пирсона: " << coeffInterconnection(firstSample, thirdSample) << endl;
					}
				}
			}
			if (choice == 23)
			{
				if (secondSample.getData().empty())
				{
					cout << "Выборка 1 пуста" << endl;
				}
				else if (thirdSample.getData().empty())
				{
					cout << "Выборка 2 пуста" << endl;
				}
				else if (secondSample.getData().size() != thirdSample.getData().size())
				{
					cout << "Выборки должны быть равного размера!" << endl;
				}
				else
				{
					if (coeffInterconnection(secondSample, thirdSample) == 1)
					{
						cout << "Между выборками положительная линейная связь" << endl;
					}
					else if (coeffInterconnection(secondSample, thirdSample) == -1)
					{
						cout << "Между выборками отрицательная линейная связь" << endl;
					}
					else if (coeffInterconnection(secondSample, thirdSample) > -0.1 && coeffInterconnection(secondSample, thirdSample) < 0.1)
					{
						cout << "Между выборками нет связи" << endl;
					}
					else
					{
						cout << "Коэффициент Пирсона: " << coeffInterconnection(secondSample, thirdSample) << endl;
					}
				}
			}			
			break;
		}

		case 16: //Выход из программы
		{
			break;
		}

		default:
		{
			cout << "Вы ввели некорректное значение" << endl;
			break;
		}
		}
	} while (button != 16);

	cout << "Хотите записать результаты в файл? Если да, введите 1, если нет, любой другой символ." << endl;
	cin >> choice;
	while (cin.fail()) //проверка входных данных
	{
		incorrectInput();
		cin >> choice;
	}
	if (choice == 1)
	{
		ofstream fout;          // поток для записи
		fout.open("res.txt");      // открываем файл для записи
		if (fout.is_open())
		{
			if (!firstSample.getData().empty())
			{
				fout << "========Первая выборка========" << endl;
				fout << firstSample << endl;
				fout << "Минимум: " << firstSample.getMinValue() << endl;
				fout << "Максимум: " << firstSample.getMaxValue() << endl;
				fout << "1 квартиль: " << firstSample.getQuartile()[1] << endl;
				fout << "2 квартиль: " << firstSample.getQuartile()[2] << endl;
				fout << "3 квартиль: " << firstSample.getQuartile()[3] << endl;
				fout << "Медиана: " << firstSample.getMedian() << endl;
				fout << "Среднее арифметическое значение: " << firstSample.getAverage() << endl;
				fout << "Коэффициент асимметрии: " << firstSample.getAsymmetry() << endl;
				fout << "Дисперсия: " << firstSample.getDispersion() << endl;
				fout << "Эксцесс: " << firstSample.getExcess() << endl;
				fout << "Результаты теста на нормальность: ";
				firstSample.isNormal() ? fout << "Гипотеза о нормальности для первой выборки принимается" << endl : fout << "Гипотеза о нормальности для первой выборки не принимается" << endl;
			}

			if (!secondSample.getData().empty())
			{
				fout << endl << "========Вторая выборка========" << endl;
				fout << secondSample << endl;
				fout << "Минимум: " << secondSample.getMinValue() << endl;
				fout << "Максимум: " << secondSample.getMaxValue() << endl;
				fout << "1 квартиль: " << secondSample.getQuartile()[1] << endl;
				fout << "2 квартиль: " << secondSample.getQuartile()[2] << endl;
				fout << "3 квартиль: " << secondSample.getQuartile()[3] << endl;
				fout << "Медиана: " << secondSample.getMedian() << endl;
				fout << "Среднее арифметическое значение: " << secondSample.getAverage() << endl;
				fout << "Коэффициент асимметрии: " << secondSample.getAsymmetry() << endl;
				fout << "Дисперсия: " << secondSample.getDispersion() << endl;
				fout << "Эксцесс: " << secondSample.getExcess() << endl;
				fout << "Результаты теста на нормальность: ";
				secondSample.isNormal() ? fout << "Гипотеза о нормальности для второй выборки принимается" << endl : fout << "Гипотеза о нормальности для второй выборки не принимается" << endl;
			}

			if (!thirdSample.getData().empty())
			{
				fout << endl << "========Третья выборка========" << endl;
				fout << thirdSample << endl;
				fout << "Минимум: " << thirdSample.getMinValue() << endl;
				fout << "Максимум: " << thirdSample.getMaxValue() << endl;
				fout << "1 квартиль: " << thirdSample.getQuartile()[1] << endl;
				fout << "2 квартиль: " << thirdSample.getQuartile()[2] << endl;
				fout << "3 квартиль: " << thirdSample.getQuartile()[3] << endl;
				fout << "Медиана: " << thirdSample.getMedian() << endl;
				fout << "Среднее арифметическое значение: " << thirdSample.getAverage() << endl;
				fout << "Коэффициент асимметрии: " << thirdSample.getAsymmetry() << endl;
				fout << "Дисперсия: " << thirdSample.getDispersion() << endl;
				fout << "Эксцесс: " << thirdSample.getExcess() << endl;
				fout << "Результаты теста на нормальность: ";
				thirdSample.isNormal() ? fout << "Гипотеза о нормальности для третьей выборки принимается" << endl : fout << "Гипотеза о нормальности для третьей выборки не принимается" << endl;
			}

			if (!firstData.empty() && !secondData.empty())
			{
				fout << endl << "Оценка взаимосвязи первой и второй выборки с помощью коэффициента Пирсона: ";
				if (coeffInterconnection(firstSample, secondSample) == 1)
				{
					fout << "Между выборками положительная линейная связь" << endl;
				}
				else if (coeffInterconnection(firstSample, secondSample) == -1)
				{
					fout << "Между выборками отрицательная линейная связь" << endl;
				}
				else if (coeffInterconnection(firstSample, secondSample) > -0.1 && coeffInterconnection(firstSample, secondSample) < 0.1)
				{
					fout << "Между выборками нет связи" << endl;
				}
				else
				{
					fout << "Коэффициент Пирсона: " << coeffInterconnection(firstSample, secondSample) << endl;
				}
			}
			if (!firstData.empty() && !thirdData.empty())
			{
				fout << endl << "Оценка взаимосвязи первой и третьей выборки с помощью коэффициента Пирсона: ";
				if (coeffInterconnection(firstSample, thirdSample) == 1)
				{
					fout << "Между выборками положительная линейная связь" << endl;
				}
				else if (coeffInterconnection(firstSample, thirdSample) == -1)
				{
					fout << "Между выборками отрицательная линейная связь" << endl;
				}
				else if (coeffInterconnection(firstSample, thirdSample) > -0.1 && coeffInterconnection(firstSample, thirdSample) < 0.1)
				{
					fout << "Между выборками нет связи" << endl;
				}
				else
				{
					fout << "Коэффициент Пирсона: " << coeffInterconnection(firstSample, thirdSample) << endl;
				}
			}
			if (!secondData.empty() && !thirdData.empty())
			{
				fout << endl << "Оценка взаимосвязи первой и второй выборки с помощью коэффициента Пирсона: ";
				if (coeffInterconnection(secondSample, thirdSample) == 1)
				{
					fout << "Между выборками положительная линейная связь" << endl;
				}
				else if (coeffInterconnection(secondSample, thirdSample) == -1)
				{
					fout << "Между выборками отрицательная линейная связь" << endl;
				}
				else if (coeffInterconnection(secondSample, thirdSample) > -0.1 && coeffInterconnection(secondSample, thirdSample) < 0.1)
				{
					fout << "Между выборками нет связи" << endl;
				}
				else
				{
					fout << "Коэффициент Пирсона: " << coeffInterconnection(secondSample, thirdSample) << endl;
				}
			}
		}
		else
		{
			cout << "Ошибка открытия файла!" << endl;
		}
		fout.close();
	}	
}
