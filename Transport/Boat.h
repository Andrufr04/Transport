#pragma once
#include "Water_Transport.h"
class Boat : public Water_Transport
{
	int maxNumPassengers;
	bool motor;
public:
	Boat();
	Boat(double max, string material, double displ, int passenNum, bool mot);
	void Output();
};

