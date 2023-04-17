#include <iostream>
#include "Circle.h"
#include "Triangle.h"

using namespace std;

int main()
{
    // Создание окружностей
    float r1, x1, y1;

    cout << "Первая окружность\n";
    cout << "Введите радиус, координаты центра:\n";

    cin >> r1 >> x1 >> y1;
    Circle circle1(r1, x1, y1);

    float r2, x2, y2;

    cout << "\nВторая окружность\n";
    cout << "Введите радиус, координаты центра:\n";

    std::cin >> r2 >> x2 >> y2;
    Circle circle2(r2, x2, y2);

    float r3, x3, y3;

    cout << "\nТретья окружность\n";
    cout << "Введите радиус, координаты центра:\n";

    cin >> r3 >> x3 >> y3;
    Circle circle3(r3, x3, y3);


    // Создание треугольника
    cout << "Введите стороны треугольника через пробел: ";

    double a, b, c;
    
    cin >> a >> b >> c;
    Triangle A(a, b, c);

    while(!A.exst_tr())
    {
        cout << "Треугольник не существует, введите новые значения сторон: \n";
        cin >> a >> b >> c;
        A.set(a, b, c);
    }


    // Демонстрация работы методов

    // Первая окружность

    cout << "\n\nДля первой окружности:\n\n";
    
    cout << "Площадь: " << circle1.area() << '\n';
    cout << "Треугольник можно вписать: " << circle1.triangle_in(a, b, c) << '\n';
    cout << "Треугольник можно описать: " << circle1.triangle_around(a, b, c) << '\n';
    cout << "Окружность пересекается: ";
    cout << "\nСо второй: " << circle1.check_circle(r2, x2, y2);
    cout << "\nС третьей: " << circle1.check_circle(r3, x3, y3);

    // Вторая окружность

    cout << "\n\nДля второй окружности:\n\n";
    
    cout << "Площадь: " << circle2.area() << '\n';
    cout << "Треугольник можно вписать: " << circle2.triangle_in(a, b, c) << '\n';
    cout << "Треугольник можно описать: " << circle2.triangle_around(a, b, c) << '\n';
    cout << "Окружность пересекается: ";
    cout << "\nС первой: " << circle2.check_circle(r1, x1, y1);
    cout << "\nС третьей: " << circle2.check_circle(r3, x3, y3);

    // Третья окружность

    cout << "\n\nДля третьей окружности:\n\n";

    cout << "Площадь: " << circle3.area() << '\n';
    cout << "Треугольник можно вписать: " << circle3.triangle_in(a, b, c) << '\n';
    cout << "Треугольник можно описать: " << circle3.triangle_around(a, b, c) << '\n';
    cout << "Окружность пересекается: ";
    cout << "\nС первой: " << circle3.check_circle(r1, x1, y1);
    cout << "\nСо второй: " << circle3.check_circle(r2, x2, y2);
}