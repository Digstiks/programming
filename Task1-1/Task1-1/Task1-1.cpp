#include <iostream>
#include <math.h>

using namespace std;
/**
 * \brief Функциия для расчета a.
 * \param x,y,z Параметр x,y,z.
 * \return Возвращает значение a.
 */
double GetA(const double x, const double y, const double z);

/**
 * \brief Функциия для расчета b.
 * \param x,y,z Параметр x,y,z.
 * \return Возвращает значение b.
 */
double GetB(const double x, const double y, const double z);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
	const auto x = 0.61;
	const auto y = 3.4;
	const auto z = 16.5; 

	const auto a = GetA(x, y, z);
	const auto b = GetB(x, y, z);

	cout << "x = " << x << ", y = " << y << ", z = " << z << '\n';
	cout << "a = " << a << ", b = " << b << endl;
	return 0;

}

double GetA(const double x, const double y, const double z)
{
	return (pow(x, 3) * pow(tan((x + y) * (x + y)), 2) + z / sqrt(x + y)); 
}

double GetB(const double x, const double y, const double z) 
{
	return ((y * pow(x, 2) - z) / (exp(z * x) - 1));
}