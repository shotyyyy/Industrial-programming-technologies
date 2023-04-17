#include <iostream>
#include "Figure.h"
#include "Circle.h"

using namespace std;

int main()
{
    // Создание четырехугольников
    cout << "Первый четырехугольник\n";
    cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    float x1, x2, x3, x4, y1, y2, y3, y4;

    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig1(x1, x2, x3, x4, y1, y2, y3, y4);

    cout << "Второй четырехугольник\n";
    cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig2(x1, x2, x3, x4, y1, y2, y3, y4);


    cout << "Третий четырехугольник\n";
    cout << "Введите сначала координаты x вершин, затем координаты y:\n";

    cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;

    Figure fig3(x1, x2, x3, x4, y1, y2, y3, y4);


    // Создание окружности
    cout << "Задайте радиус и координаты центра окружности\n";

    float r, x_center, y_center;

    Circle circle1(r, x_center, y_center);


    // Демонстрация методов
    // Первый четырехугольник
    cout << "\n\nДля первого четырехугольника:\n\n";

    cout << "Параметры:";
    fig1.show();

    cout << "Ромб?: " << fig1.is_romb();
    cout << "Прямоугольник?: " << fig1.is_prug();
    cout << "Квадрат?: " << fig1.is_square();


    // Второй четырехугольник
    cout << "\n\nДля Второго четырехугольника:\n\n";

    cout << "Параметры:";
    fig2.show();

    cout << "Ромб?: " << fig2.is_romb() << '\n';
    cout << "Прямоугольник?: " << fig2.is_prug() << '\n';
    cout << "Квадрат?: " << fig2.is_square() << '\n';


    // Третий четырехугольник
    cout << "\n\nДля первого четырехугольника:\n\n";

    cout << "Параметры:";
    fig3.show();

    cout << "Ромб?: " << fig3.is_romb() << '\n';
    cout << "Прямоугольник?: " << fig3.is_prug() << '\n';
    cout << "Квадрат?: " << fig3.is_square() << '\n';
}