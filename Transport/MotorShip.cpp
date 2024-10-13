#include "MotorShip.h"

MotorShip::MotorShip() : Water_Transport()
{
	maxNumPassengers = 0;
	lifeboats = 0;
}

MotorShip::MotorShip(double max, string material, double displ, int passenNum, int lboats) : Water_Transport(max, material, displ)
{
	maxNumPassengers = passenNum;
	lifeboats = lboats;
}

void MotorShip::Output()
{
	Water_Transport::Output();
	cout << "Max num passengers: " << maxNumPassengers << endl
		<< "Number of lifeboats: " << lifeboats << endl;
}

bool MotorShip::enoughLifeboats(int lifeboatSeats)
{
	int a = lifeboatSeats * lifeboats;
	if (a >= maxNumPassengers)
	{
		cout << "There are enough lifeboats for all passengers" << endl;
		return true;
	}
	else
	{
		cout << "Not enough lifeboats for all passengers!" << endl;
		return false;
	}
}
