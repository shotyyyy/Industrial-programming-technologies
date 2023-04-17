#include "Triangle.h"
#include <iostream>
#include <cmath>

using namespace std;

// Объявить значения сторон
void Triangle::set(double _a, double _b, double _c)
{
    a = _a;
    b = _b;
    c = _c;
}   

// Вывести значения сторон
void Triangle::show()
{
    cout << "a:" << a << "; b:" << b << "; c:" << c;
}

// Существует ли треугольник
bool Triangle::exst_tr()
{
    return (a + b > c && a + c > b && b + c > a);
}

// Периметр
double Triangle::perimeter()
{
    return(a + b + c);
}

// Площадь
double Triangle::area()
{
    double p = this->perimeter() / 2;

    return(sqrt(p * (p - a) * (p - b) * (p - c)));
}