#include <iostream>
#include "eq2.h"

using namespace std;

int main()
{
    double a, b, c;

    cout << "Введите коэффиценты 1го квадратного уравнения:" << endl;
    cin >> a >> b >> c;
    cout << endl;
    eq2 first_equation(a, b, c);

    cout << "Введите коэффиценты 2го квадратного уравнения:" << endl;
    cin >> a >> b >> c;
    cout << endl;
    eq2 second_equation(a, b, c);

    double x1;

    cout << "Введите значение х1 для подстановки" << endl;
    cin >> x1;
    cout << endl;

    cout << "Наибольший корень 1го квадратного уравнения: " << first_equation.find_X() << endl;
    cout << endl;

    cout << "Наибольшее значение 1го квадратного уравнения при х = х1: " << first_equation.find_Y(x1) << endl;
    cout << endl;

    cout << "Наибольший корень 2го квадратного уравнения: " << second_equation.find_X() << endl;
    cout << endl;

    cout << "Наибольшее значение 2го квадратного уравнения при х = х1: " << second_equation.find_Y(x1) << endl;
    cout << endl;

    eq2 summ = first_equation + second_equation;

    cout << "Сумма сложения многочленов: ";
    summ.get_sum();
    cout << endl;

    return 0;
}