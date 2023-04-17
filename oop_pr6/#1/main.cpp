#include <iostream>
#include "cone.h"

using namespace std;


int main()
{
    int x, y, z, r, h;

    cout << "\nСоздание конуса с центром в начале координат: " << endl;

    cout << "\nВведите радиус основания и высоту конуса: " << endl;

    cin >> r >> h;
    cone cone1(r , h);



    cout << "\nСоздание произвольного конуса: " << endl;

    cout << "\nВведите координаты основания конуса: " << endl;

    cin >> x >> y >> z;

    cout << "\nВведите радиус основания и высоту конуса: " << endl;

    cin >> r >> h;
    cone cone2(x, y, z, r, h);



    cout << "\nПервый конус: " << endl;

    cout << "\nПлощадь поверхности: " << cone1.Surface_Area() << endl;

    cout << "\nОбъем конуса: " << cone1.Volume() << endl;



    cout << "\nВторой конус: " << endl << endl;

    cout << "\nПлощадь поверхности: " << cone2.Surface_Area() << endl;

    cout << "\nОбъем конуса: " << cone2.Volume() << endl;



    cone* cone3 = new cone();

    cout << "\nСоздание динамического конуса: " << endl;

    cout << "\nВведите координаты основания конуса: " << endl;

    cin >> x >> y >> z;

    cout << "\nВведите радиус основания и высоту конуса: " << endl;

    cin >> r >> h;
    cone3->Set(x, y, z, r, h);

    cout << "\nДинамический конус: " << endl;

    cone3->Print();
    delete cone3;



    int n = 2;
    cone* mas = new cone[n];

    for (int i = 0; i < n; i++)
    {
        mas[i] = cone(5, 5, 5, 5, 5);
    }

    cout << "\nМассив из двух конусов: " << endl << endl;

    for(int i = 0; i < n; i++)
    {
        mas[i].Print();
    }

    delete[] mas;
}