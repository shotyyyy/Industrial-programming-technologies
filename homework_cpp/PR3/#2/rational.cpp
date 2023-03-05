#include <iostream>
#include "rational.h"

using namespace std;

rational::rational()
{
    a = 0;
    b = 0;
    exists = true;
}

rational::rational(int a1, int b1)
{
    a = a1;
    b = b1;
    exists = true;

    if (b == 0)
    {
        a = 0;
        exists = false;
    }

    if (a == 0)
    {
        b = 0;
    }

    if (a != 0 and exists)
    {
        if (a % b == 0)
        {
            a /= b;
            b /= b;
        }

        while(a > b && b != 1)
        {
            a %= b;
        }

        if (b % a == 0)
        {
            a /= a;
            b /= a;
        }
    }
}

void rational::set(int a1, int b1)
{
    a = a1;
    b = b1;
    exists = true;

    if (b == 0)
    {
        a = 0;
        exists = false;
    }

    if (a == 0)
    {
        b = 0;
    }

    if (a != 0 and exists)
    {
        if (a % b == 0)
        {
            a /= b;
            b /= b;
        }

        while(a > b && b != 1)
        {
            a %= b;
        }

        if (b % a == 0)
        {
            a /= a;
            b /= a;
        }
    }
}

void rational::show()
{
    if (exists) cout << a << "/" << b;

    else cout << "Не существует" << endl;
}