#include <iostream>

using namespace std;

class Triangle
{
private:
    double a, b, c;

public:
    // Конструктор
    Triangle(double _a, double _b, double _c);
    
    // Объявить значения сторон
    void set(double _a, double _b, double _c);

    // Вывести значения сторон
    void show();

    // Существует ли треугольник
    bool exst_tr();

    // Периметр
    double perimeter();

    // Площадь
    double area();
};