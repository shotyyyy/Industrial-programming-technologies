#include "Circle.h"
#include "Triangle.h"
#include <cmath>

using namespace std;

// Конструктор
Circle::Circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}

// Задать значения
void Circle::set_circle(float r, float x, float y)
{
    radius = r;
    x_center = x;
    y_center = y;
}

// Площадь
float Circle::area()
{
    return 3.14 * radius*radius;
}

// Можно ли описать окружность вокруг треугольника со сторонами a, b, c
bool Circle::triangle_around(double a, double b, double c)
{
    Triangle A(a, b, c);
    
    return(radius == (a*b*c)/4*A.area());
}

// Можно ли вписать в треугольник со сторонами a, b, c окружность
bool Circle::triangle_in(double a, double b, double c)
{
    Triangle A(a, b, c);

    return(radius == A.area()/A.perimeter()/2);
}

// Пересекается ли с данной окружностью окружность с заданными аргументами
bool Circle::check_circle(float r, float x_cntr, float y_cntr)
{
    // Расстояние между центрами меньше суммы радиусов
    double distance = sqrt(pow((x_cntr - x_center), 2) + pow((y_cntr - y_center), 2));
    
    return(distance < (r + radius));
}