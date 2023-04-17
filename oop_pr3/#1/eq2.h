#include <iostream>

class eq2
{
    private:
        double a, b, c;
        double D;
    
    public:
        // Конструктор экземпляра квадратного уравнения
        eq2(double a1, double b1, double c1);

        // Объявление параметров уравнения квадратного уравнения
        void set(double a1, double b1, double c1);

        // Наибольший корень квадратного уравнения (0 если корней нет)
        double find_X();

        // Наибольшее значение квадратного уравнения с заданными коэффицентами при заданном X
        double find_Y(double x1);

        // Возвращение коэффицента А
        double get_A();

        // Возвращение коэффицента В
        double get_B();

        // Возвращение коэффицента С
        double get_C();

        // Возвращение дискриминанта
        double get_D();

        // Вывод суммы многочленов
        void get_sum();
};

eq2 operator + (eq2 A, eq2 B);