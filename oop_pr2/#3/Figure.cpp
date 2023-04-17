#include "Figure.h"
#include <iostream>
#include <math.h>

using namespace std;

// Конструктор
Figure::Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4)
{
    // Длины сторон
    s12 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    s23 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    s34 = sqrt(pow(x4 - x3, 2) + pow(y4 - y3, 2));
    s41 = sqrt(pow(x1 - x4, 2) + pow(y1 - y4, 2));

    // Диагонали
    float x_d13 = x3 - x1, y_d13 = y3 - y1;
    float x_d24 = x4 - x2, y_d24 = y4 - y2;

    d13 = sqrt(pow(x_d13, 2) + pow(y_d13, 2));
    d24 = sqrt(pow(x_d24, 2) + pow(y_d24, 2));

    // Угол между диагоналями
    float a = (x_d13*x_d24 + y_d13*y_d24);
    float b = sqrt(pow(x_d13, 2) + pow(y_d13, 2)) * sqrt(pow(x_d24, 2) + pow(y_d24 , 2));
    float cosa = a / b;
    alfa = acos(cosa);

    // Площадь
    S = d13 * d24 * sin(alfa);

    // Периметр
    P = s12 + s23 + s34 + s41;
}

// Выводит все аттрибуты на экран
void Figure::show()
{
    cout << "\nКоординаты вершин:\n";
    cout << "1: " << x1 << ' ' << y1 << '\n';
    cout << "2: " << x2 << ' ' << y2 << '\n';
    cout << "3: " << x3 << ' ' << y3 << '\n';
    cout << "4: " << x4 << ' ' << y4 << "\n\n";

    cout << "\nПлощадь: " << S << "\n\n";
    
    cout << "\nПериметр: " << P << '\n';
}

// Ромб?
bool Figure::is_romb()
{
    bool allSidesEqual = (s12 == s23 == s34 == s41);

    // M_PI_2 = пи/2 (90 градусов)
    return(allSidesEqual && alfa == M_PI_2);
}

// Прямоугольник?
bool Figure::is_prug()
{
    // проверка, что все углы прямые

    // Угол между s12 и s23
    float a = (x1*x2 + y1*y2);
    float b = sqrt(pow(x1, 2) + pow(y1, 2)) * sqrt(pow(x2, 2) + pow(y2 , 2));
    float cosa = a / b;
    float angle_12_23 = acos(cosa);

    // Угол между s23 и s34
    a = (x2*x3 + y2*y3);
    b = sqrt(pow(x2, 2) + pow(y2, 2)) * sqrt(pow(x3, 2) + pow(y3 , 2));
    cosa = a / b;
    float angle_23_34 = acos(cosa);

    // Угол между s34 и s41
    a = (x3*x4 + y3*y4);
    b = sqrt(pow(x3, 2) + pow(y3, 2)) * sqrt(pow(x4, 2) + pow(y4 , 2));
    cosa = a / b;
    float angle_34_41 = acos(cosa);

    // Угол между s41 и s12
    a = (x4*x1 + y4*y1);
    b = sqrt(pow(x4, 2) + pow(y4, 2)) * sqrt(pow(x1, 2) + pow(y1 , 2));
    cosa = a / b;
    float angle_41_23 = acos(cosa);

    bool allAnglesSquare = (angle_12_23 == M_PI_2 && angle_23_34 == angle_12_23 && angle_34_41 && angle_41_23 == angle_12_23);


    // Проверка, что противоположные стороны равны
    bool oppositeSidesEqual = (s12 == s34 || s23 == s41);

    
    // Вывод
    return(allAnglesSquare && oppositeSidesEqual);
}

// Квадрат?
bool Figure::is_square()
{
    // Проверка на то, что все стороны равны
    bool allSidesEqual = (s12 == s23 == s34 == s41);
    
    // Вывод
    return(is_prug() && allSidesEqual);
}

// Можно вписать в треугольник?
bool Figure::is_in_circle()
{

}

// Можно вписать окружность?
bool Figure::is_out_circle()
{

}