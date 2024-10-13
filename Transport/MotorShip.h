#pragma once
#include "Water_Transport.h"
class MotorShip : public Water_Transport
{
	int maxNumPassengers;
	int lifeboats;
public:
	MotorShip();
	MotorShip(double max, string material, double displ, int passenNum, int lboats);
	void Output();
	bool enoughLifeboats(int lifeboatSeats);
};

