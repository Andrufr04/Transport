#pragma once
#include "Ground_Transport.h"
class Railway : public Ground_Transport
{
	int numOfWagons;
public:
	Railway();
	Railway(double max, string material, int wheels, int wagons);
	void Output();
};

