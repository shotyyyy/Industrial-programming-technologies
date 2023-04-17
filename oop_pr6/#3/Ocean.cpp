#include <iostream>
#include "Ocean.h"
#include <string>
#include <cmath>

using namespace std;

Ocean::Ocean()
{
	name = "";
	location = "";
	volume = 0; depth = 0; area = 0;
}

Ocean::Ocean(string n, string l, double v, double d, double a)
{
	name = n; location = l; volume = v; depth = d; area = a;
}

string Ocean::getName()
{
	return name;
}


ostream& operator<<(ostream& os, const Ocean& o)
{
	os << "Name: " << o.name << endl;
	os << "Location: " << o.location << endl;
	os << "Volume: " << o.volume << "mill km^3" << endl;
	os << "Area: " << o.area << " mill km^2" << endl;
	os << "Depth: " << o.depth << " km" << endl;

	return os;
}