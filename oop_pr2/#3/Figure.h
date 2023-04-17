#include <iostream>

using namespace std;

class Figure
{
private:
    // Координаты вершин
    float x1, x2, x3, x4, y1, y2, y3, y4;
    
    // Длины сторон
    float s12, s23, s34, s41;

    // Диагонали
    float d13, d24;

    // Угол между диагоналями
    float alfa;

    // Площадь и периметр
    float S, P;

public:
    // Конструктор
    Figure(float x1, float x2, float x3, float x4, float y1, float y2, float y3, float y4);

    // Выводит все аттрибуты на экран
    void show();

    // Прямоугольник?
    bool is_prug();

    // Квадрат?
    bool is_square();

    // Ромб?
    bool is_romb();

    // Можно вписать в треугольник?
    bool is_in_circle();

    // Можно вписать окружность?
    bool is_out_circle();
};