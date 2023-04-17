#include <iostream>
#include <cmath>
#include "Ocean.h"
#include "Bay.h"
#include "Sea.h"

using namespace std;

int main()
{
	//Океаны

	Ocean atlanticOcean("Atlantic Ocean", "It washes Northern and Southern Africa, also Europe and Greenland ", 329.7, 8.7, 91.6);
	Ocean pacificOcean("Pacific Ocean", "It washes Australia, Africa, South and North America", 710, 11.02, 169.2);

	//Моря

	//Моря Атлантики

	Sea balticSea("Baltic Sea", "53 degrees N, 20 degrees E.", 21.5, 0.470, 419);
	Sea mediterranean("Mediterranean Sea", "35 degrees N, 18 degrees E.", 3839, 5.1, 2500);

	//Тихоокеанские моря

	Sea ohotskoeSea("Ohotskoe Sea", "52 degrees N, 149 degrees E.", 1316, 3.9, 1603);
	Sea beringSea("Bering Sea", "60 degrees N, 178 degrees W.", 3795, 4.4, 2315);

	//Заливы

	//Заливы Балтийского моря(Ботнический и Финские заливы)

	Bay botnicBay("Botnic Bay", 0.295, 117);
	Bay finnishBay("Finnish Bay", 0.121, 29);

	//Заливы Средиземного моря(Валенсийский)

	Bay valinciaBay("Valencia Bay", 0.5, 00);

	//Заливы Охотского моря(залив Шелихова и Сахалинский залив)

	Bay shelikhovBay("Shelikhova Bay", 0.350, 130);
	Bay sahalinBay("Sahalin Bay", 0.05,202);

	//Заливы Берингова моря(Анадырский залив)

	Bay anadyrskyBay("Anadyrsky Bay", 0.105, 200);


	//set oceans

	balticSea.setParent(&atlanticOcean);
	mediterranean.setParent(&atlanticOcean);

	ohotskoeSea.setParent(&pacificOcean);
	beringSea.setParent(&pacificOcean);

	//set bays

	botnicBay.setParent(&balticSea);
	finnishBay.setParent(&balticSea);

	valinciaBay.setParent(&mediterranean);

	shelikhovBay.setParent(&ohotskoeSea);
	sahalinBay.setParent(&ohotskoeSea);

	anadyrskyBay.setParent(&beringSea);

	//checking :))))))))

	cout << atlanticOcean << endl;
	cout << balticSea << endl;
	cout << finnishBay << endl;
}