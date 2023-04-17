#pragma once
#include <iostream>
#include <string>
#include "Ocean.h"

using namespace std;

class Sea : public Ocean
{
protected:
	Ocean* parent;

	string name;
	string location;
	double volume;
	double depth; 
	double area;   

public:
	Sea();
	Sea(string n, string l, double v, double d, double a);
	Sea(string n, Ocean* _parent);

	void setParent(Ocean*  _parent);
	Ocean* getParent();

	friend ostream& operator<<(ostream& os, const Sea& o);
};