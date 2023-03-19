#include <iostream>
#include <cmath>
#include "cone.h"

using namespace std;


cone::cone()
{
    x = y = z = radius = height = 0;
}

cone::cone(double radius1, double height1)
{
    x = y = z = 0.0;
    radius = radius1;
    height = height1;
}

cone::cone(double x1, double y1, double z1, double radius1, double height1)
{
    x = x1;
    y = y1;
    z = z1;
    radius = radius1;
    height = height1;
}

 void cone::Set(double x1, double y1, double z1, double radius1, double height1)
{
    x = x1;
    y = y1;
    z = z1;
    radius = radius1;
    height = height1;
}

void cone::Print()
{
    cout << "Координаты центра основания конуса: " << x << ", " << y << ", " << z << ", " << endl;

    cout << "Радиус основания конуса: " << radius << endl;

    cout << "Высота конуса: " << height << endl;
}

double cone::Surface_Area()
{
    double l = sqrt(radius * radius + height * height);

    return M_PI * radius * l + M_PI * radius * radius;
}

double cone::Volume()
{
    return M_PI * radius * radius * height / 3;
}