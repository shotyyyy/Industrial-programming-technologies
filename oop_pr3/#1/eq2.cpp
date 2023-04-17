#include <iostream>
#include <cmath>
#include "eq2.h"

using namespace std;

eq2::eq2(double a1, double b1, double c1)
{
    a = a1;
    b = b1;
    c = c1;
    D = b * b - (4 * a * c);
}

void eq2::set(double a1, double b1, double c1)
{
    a = a1;
    b = b1;
    c = c1;
}

double eq2::find_X()
{
    if (D < 0)
    {
        cout << "Нет корней" << endl;
        return 0;
    }

    else
    {
        if (D == 0)
        {
            double x = (-b - sqrt(D)) / (2 * a);
            cout << x << endl;
            return x;
        }

        else
        {
            double x1 = (b - sqrt(D)) / (2 * a);
            double x2 = (b + sqrt(D)) / (2 * a);

            if (x1 > x2) return x1;

            else return x2;
        }
    }
}

double eq2::find_Y(double x1)
{
    return (a * x1 * x1 + b * x1 + c);
}

double eq2::get_A()
{
    return a;
}

double eq2::get_B()
{
    return b;
}

double eq2::get_C()
{
    return c;
}

double eq2::get_D()
{
    return D;
}

eq2 operator + (eq2 A, eq2 B)
{
    eq2 temp(A.get_A() + B.get_A(), A.get_B() + B.get_B(), A.get_C() + B.get_C());

    return temp;
}

void eq2::get_sum()
{
    cout << a << "x^2 ";
    
    if (b >0) cout << "+ ";

    cout << b << "x ";

    if (c >0) cout << "+ ";

    cout << c << endl;

}