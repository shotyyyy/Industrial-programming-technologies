#include <iostream>

class rational
{
    private:
    int a, b;
    bool exists;

    public:
        // Конструктор по умолчанию
        rational();

        // Конструктор экземпляра рациональной дроби
        rational(int a1, int b1);

        // Объявление значений
        void set(int a1, int b1);

        // Вывод дроби в виде через черту
        void show();
};