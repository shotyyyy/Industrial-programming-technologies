#include <iostream>
#include "Sea.h"
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Sea& o)
{
	os << "Name: " << o.name << endl;
	os << "Location: " << o.location << endl;
	os << "Volume: " << o.volume << " thousand km^3" << endl;
	os << "Area: " << o.area << " thousand km^2" << endl;
	os << "Depth: " << o.depth << " km" << endl;
	string  parentName = (o.parent ? o.parent->getName() : "inland sea");
	os << "Inside: " << parentName << endl;
	

	return os;
}

Sea::Sea()
{
	parent = nullptr;
	name = "";
	location = "";
	volume = 0; depth = 0; area = 0;
}

Sea::Sea(string n, string l, double v, double d, double a)
{
	name = n; location = l; volume = v; depth = d; area = a;
}

Sea::Sea(string n, Ocean* _parent)
{

	name = "";
	parent = _parent;
}

void Sea::setParent(Ocean* _parent)
{
	parent = _parent;
}

Ocean* Sea::getParent()
{
	return parent;
}