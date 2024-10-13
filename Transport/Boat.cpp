#include "Boat.h"

Boat::Boat() : Water_Transport()
{
	maxNumPassengers = 0;
	motor = 0;
}

Boat::Boat(double max, string material, double displ, int passenNum, bool mot) : Water_Transport(max, material, displ)
{
	maxNumPassengers = passenNum;
	motor = mot;
}

void Boat::Output()
{
	Water_Transport::Output();
	cout << "Max number of passengers: " << maxNumPassengers << endl
		<< "Motor: " << (motor ? "yes" : "no") << endl;
}
