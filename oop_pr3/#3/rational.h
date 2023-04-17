#include <iostream>

using namespace std;

class rational
{
    int a, b;
    bool canExist;

public:
    // Конструктор по умолчанию
    rational();
    
    // Конструктор
    rational(int a1, int b1);

    // Запись параметров в объект
    void set(int a1, int b1);

    // Вывод дроби через черту
    void show();

    // Получение переменных
    int get_a();
    int get_b();
    
    // Перегрузки
    rational operator= (rational A);
    
    rational operator++(int);
    
    rational operator+ (rational B);

    friend rational operator - (rational A, rational B);
};
    
bool operator== (rational A, rational B);

rational operator> (rational A, rational B);