#include <iostream>
#include "rational.h"

using namespace std;

int main()
{
    int n, a, b;

    cout << "Введите размер массива: " << endl;
    cin >> n;

    rational* mas = new rational;

    for (int i = 0; i < n; i++)
    {
        cout << "Введите числитель и знаменатель дроби: " << endl;
        cin >> a >> b;

        mas[i].set(a, b);
    }

    cout << "Выведение дроби:" << endl;

    for (int i = 0; i < n; i++)
    {
        mas[i].show();
        cout << endl;
    }

    delete[] mas;
    
    return 0;
}