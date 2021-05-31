#include <iostream>
#include<cmath>
using namespace std;

/*
*\brief Функция нахождения расстояния между точками.
*\param x1,x2,y1,y2 Параметры коорднат точек .
*\return расстояние между точками.
*/
double getDistance(const double x1, const double y1,
    const double x2, const double y2);

/**
 * \brief Точка входа в программу
 * \return Возвращает нуль, в случае успеха
 */
int main()
{
    setlocale(LC_ALL, "ru");
    cout << "Введите координаты точки А" << endl;
    double x1, y1;
    cin >> x1 >> y1;
    cout << "Введите координаты точки B" << endl;
    double x2, y2;
    cin >> x2 >> y2;
    cout << "Расстояние между точками: ";
    double distance = getDistance(x1, y1, x2, y2); 
    cout << distance;
    return 0;
}

double getDistance(const double x1, const double y1,
    const double x2, const double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}