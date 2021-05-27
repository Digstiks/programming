#define _USE_MATH_DEFINES

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

/**
 * \brief Функциия для расчета y1.
 * \param x Параметр x.
 * \return Возвращает значение y1.
 */

double GetFirst(const double x);
/**
 * \brief Функциия для расчета y2.
 * \param x Параметр x.
 * \return Возвращает значение y2.
 */
double GetSecond(const double x);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
	setlocale(LC_ALL, "Russian");

	const double a = 2.5;
	double x;
	cout << "Введите число x \n";
	cin >> x;
	if (x > a)
	{
		auto first = GetFirst(x);
		cout << first;
	}
	else
	{
		auto second = GetSecond(x);
		cout << second;
	}
}

double GetFirst(double x) {
	return x * pow(sin(x), 2);
}
double GetSecond(double x) {
	return x * pow(cos(x), 2);
}