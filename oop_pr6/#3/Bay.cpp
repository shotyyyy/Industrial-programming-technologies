#include <iostream>
#include "Bay.h"
#include <string>

using namespace std;

ostream& operator<<(ostream& os, const Bay& o)
{
	string grandParentName;
	os << "Name: " << o.name << endl;
	os << "Area: " << o.area << " mill km^2" << endl;
	os << "Depth: " << o.depth << " km" << endl;
	os << "Inside: " << o.seaParent->getName() << endl;
	string oceanParentName = (o.seaParent->getParent() ? o.seaParent->getParent()->getName() : "nn");
	os << "Belongs to: " << oceanParentName << endl;

	return os;
}

Bay::Bay()
{
	seaParent = nullptr;
	name = "";
	location = "";
	volume = 0; depth = 0; area = 0;
}

Bay::Bay(string n, double d, double a)
{
	name = n; depth = d; area = a;
}

Bay::Bay(string n, Sea* _seaParent)
{
	seaParent = _seaParent;
}

void Bay::setParent(Sea* _seaParent)
{
	seaParent = _seaParent;
}

Sea* Bay::getParent()
{
	return seaParent;
}