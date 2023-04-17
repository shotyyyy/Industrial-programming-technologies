#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    
    // Создание динамического массива
    int n;

    cout << "Введите размер массива: ";
    cin >> n;

    rational* A = new rational;
    
    
    // Занесение элементов в массив
    for(int i = 0; i < n; i++)
    {
        int _a, _b;

        cout << "\nВведите числитель и знаменатель дроби через пробел:\n";
        cin >> _a >> _b;

        A[i].set(_a, _b);
    }

    // Вывод элементов массива
    cout << "Введенные дроби:'\n";

    for(int i = 0; i < n; i++)
    {
        A[i].show();
        cout << '\n';
    }

    // Проверка работы методов
    int selection1, selection2;

    if (n > 1)
    {
        // Сложение
        
        cout << "Какие дроби сложить? (отсчет начинается с нуля)\n";
        cin >> selection1 >> selection2;

        rational sum = A[selection1] +  A[selection2];
        
        sum.show();

        // Вычитание
        cout << "\n\nКакие дроби вычесть? (отсчет начинается с нуля)\n";
        cin >> selection1 >> selection2;

        rational diff = A[selection1] - A[selection2];
        
        diff.show();

        // Сравнение ==
        cout << "\n\nКакие дроби проверить на равность? (отсчет начинается с нуля)\n";
        cin >> selection1 >> selection2;

        bool areEqual = A[selection1] == A[selection2];
        
        cout << (areEqual ? "Дроби равны" : "Дроби не равны");

        // Сравнение >
        cout << "\n\nКакие дроби сравнить? (отсчет начинается с нуля)\n";
        cin >> selection1 >> selection2;

        rational max = A[selection1] > A[selection2];

        cout << "Наибольшая дробь: ";
        max.show();        
    }

    // Инкремент
    std::cout << "\n\nКакую дробь инкрементировать? (отсчет начинается с нуля)\n";
    std::cin >> selection1;

    A[selection1]++;
    A[selection1].show();

    std::cout << '\n';


    // Освобождение памяти
    delete[] A;
}