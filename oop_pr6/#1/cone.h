#include <iostream>

class cone
{
    private:
        double x, y, z, radius, height;

    public:
        // Конструктор по умолчанию
        cone();

        // Конструктор с центорм в начале координат
        cone(double radius1, double height1);

        // Конструктор с произвольным центром
        cone(double x1, double y1, double z1, double radius1, double height1);

        // Ввод конуса
        void Set(double x1, double y1, double z1, double radius1, double height1);

        // Вывод конуса
        void Print();

        // Площадь поверхности конуса
        double Surface_Area();

        // Объем конуса
        double Volume();
};