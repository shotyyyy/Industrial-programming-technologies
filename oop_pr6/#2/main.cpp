#include <iostream>
#include <cmath>
#include "cone.h"

using namespace std;

int main()
{
    cone mainCone(1,1,1,10,15);

	cout << "Основной конус: " << mainCone;
	cout << "Площадь поверхноси: " << mainCone.Surface_Area() << endl;
	cout << "Объем: " << mainCone.Volume() << endl;
	cout << "---------------------------------------" << endl;

	truncatedCone tCone1(10, 10, 2.5);
	truncatedCone tCone2(10, 6, 4.4);

	tCone1.setVolume(mainCone.Volume());

	cout << "Усеченный конус 1: " << tCone1;
	cout << "Площадь поверхности: " << tCone1.Surface_Area() << endl;
	cout << "Объем: " << tCone1.Volume() << endl;
	cout << endl;

	tCone2.setVolume(mainCone.Volume());

	cout << "Усеченный конус 2: " << tCone2;
	cout << "Площадь поверхности: " << tCone2.Surface_Area() << endl;
	cout << "Объем: " << tCone2.Volume() << endl;

	cout << "Сравнение: ";

	tCone1.Comprassion(tCone1, tCone2);

	cout << endl << "---------------------------------------" << endl;

	truncatedCone tCone3;

	cout << "функция перегружена" << endl;

	cin >> tCone3;
	cout << tCone3;

    return 0;
}