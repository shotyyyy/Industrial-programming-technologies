#include "Triangle.h"
#include <iostream>

using namespace std;

int main()
{
    Triangle A[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "Введите стороны треугольника №" << i + 1 << " через пробел:\n";

        double a, b, c;
        cin >> a >> b >> c;

        A[i].set(a, b, c);

        while(!A[i].exst_tr())
        {
            cout << "Треугольник не существует, введите новые значения сторон:\n";
            cin >> a >> b >> c;
            A[i].set(a, b, c);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        cout << "Треугольник №" << i + 1 << '\n';

        A[i].show();
        cout << '\n';

        cout << "Периметр: " << A[i].perimeter() << '\n';
        cout << "Площадь: " << A[i].area() << "\n\n"; 
    }
}