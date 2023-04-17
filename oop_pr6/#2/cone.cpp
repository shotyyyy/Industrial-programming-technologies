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

double cone::Surface_Area() const
{
    double l = sqrt(radius * radius + height * height);

    return M_PI * radius * l + M_PI * radius * radius;
}

double cone::Volume() const
{
    return M_PI * radius * radius * height / 3;
}

double cone::GetX()
{
    return x;
}

double cone::GetY()
{
    return y;
}

double cone::GetZ()
{
    return z;
}

double cone::GetRadius()
{
    return radius;
}

double cone::GetH()
{
    return height;
}




truncatedCone::truncatedCone()
{
    x = y = z = radius = radius2 = height = 0;
}

truncatedCone::truncatedCone(double radius1, double _radius2, double height1)
{
    x = y = z = 0;
    radius = radius1;
    radius2 = _radius2;
    height = height1;
}

truncatedCone::truncatedCone(double x1, double y1, double z1, double radius1, double _radius2, double height1)
{
    x = x1;
    y = y1;
    z = z1;
    radius = radius1;
    radius2 = _radius2;
    height = height1;
}

void truncatedCone::Set(double x1, double y1, double z1, double radius1, double _radius2, double height1)
{
    x = x1;
    y = y1;
    z = z1;
    radius = radius1;
    radius2 = _radius2;
    height = height1;
}

void truncatedCone::setVolume(double vol1)
{
	vol = vol1;
}

double truncatedCone::getVolume()
{
	return vol;
}

double truncatedCone::Surface_Area() const
{
    return (M_PI * radius * radius) + (M_PI * radius2 * radius2) + M_PI * (radius + radius2) * sqrt((radius - radius2) * (radius - radius2) + height * height);
}

double truncatedCone::Volume() const
{
    return (M_PI * height * (radius * radius + radius * radius2 * radius2)) / 3;
}

void truncatedCone::Comprassion(truncatedCone cone1, truncatedCone cone2)
{
    if (cone1.Surface_Area() > cone2.Surface_Area())
    {
        cout << "Площадь поверхности 1го усеченного конуса > площади поверхности 2го усеченного конуса" << endl;
    }

    else
    {
        cout << "Площадь поверхности 1го усеченного конуса < площади поверхности 2го усеченного конуса" << endl;
    }
}

ostream &operator<<(ostream &stream, truncatedCone obj)
{
    stream << "\nКоординаты центра основания: " << obj.x << ", " << obj.y << ", " << obj.z << '\n';
    stream << "Радиус основания: " << obj.radius << '\n';
    stream << "Радиус верхнего основания: " << obj.radius2 << '\n';
    stream << "Высота конуса: " << obj.height << '\n';
    stream << "Площадь поверхности конуса: " << obj.Surface_Area() << '\n';
    stream << "Объем конуса: " << obj.Volume() << '\n';

    return stream;
}

istream &operator>>(istream &stream, truncatedCone obj)
{
    cout << "Введите координаты центра основания конуса:\n";
    stream >> obj.x >> obj.y >> obj.z;

    cout << "Введите радиус нижнего и верхнего оснований\n";
    stream >> obj.radius >> obj.radius2;

    cout << "Введите высоту\n";
    stream >> obj.height;

    return stream;
}