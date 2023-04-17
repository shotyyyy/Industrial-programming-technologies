#include <iostream>

using namespace std;

class Circle
{
private:
    float radius, x_center, y_center;

public:
    // Конструктор
    Circle(float r, float x, float y);
    
    // Задать значения
    void set_circle(float r, float x, float y);

    // Площадь
    float area();

    // Можно ли описать окружность вокруг треугольника со сторонами a, b, c
    bool triangle_around(double a, double b, double c);
    
    // Можно ли вписать в окружность треугольник со сторонами a, b, c
    bool triangle_in(double a, double b, double c);

    //Пересекается ли с данной окружностью окружность с заданными аргументами
    bool check_circle(float r, float x_cntr, float y_cntr);
};