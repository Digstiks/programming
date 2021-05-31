#define _USE_MATH_DEFINES


#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;


/**
* \brief функция для расчета y
*\param Параметр x
* 
*\reurn
*/
double Calculate(const double x);

/**
 * \brief Функциия для расчета суммы.
 * \param x Параметр x,n2.
 * \return Возвращает значение sum.
 */
double Reccurent(const double x, const int n2);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{	
	int n2 = 0;
	auto sum = 0.0;
	const auto left = 0.1;
	const auto right = 0.9;
	const auto step = 0.1;

	cout << "Please print n\n";
	cin >> n2;
	auto x = left;
	cout << " x" << setw(15) << "y" << setw(20) << "sum\n";

	while ((x < right) || (abs(x - right) < step))
	{
		if (isCalculated(x))
		{
			const auto y = Calculate(x);
			const auto z = Reccurent(x, n2);
			cout << setw(10) << setprecision(2) << x << setw(15)
				<< setprecision(5) << y << setw(20) << setprecision(4) << z << endl;
		}
		else
		{
			cout << setw(10) << setprecision(2) << x << setw(15)
				<< "not defined" << endl;
		}
		x += step;
		
	}
	
	return 0;
}

bool isCalculated(const double x) {
	return x >= numeric_limits<double>::min();
}

double Calculate(const double x) {
	return ((1 + 2 * pow(x, 2)) * pow(M_E, pow(x, 2)));
}

double Reccurent(const double x, const int n2)
{
	int n1;
	float sum = 0;
	int answer = 1;
	for (n1 = 1; n1 <= n2; n1++)
	{
		answer = answer * (n1);
		sum = sum + ((2 * x) * pow(x, 2 * n1)) / (answer);
	}
	return (sum);
}
