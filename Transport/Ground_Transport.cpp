#include "Ground_Transport.h"

Ground_Transport::Ground_Transport() : Transport()
{
	numOfWheels = 0;
}

Ground_Transport::Ground_Transport(double max, string material, int wheels) : Transport(max, material)
{
	numOfWheels = wheels;
}

void Ground_Transport::Output()
{
	Transport::Output();
	cout << "Num of wheels: " << numOfWheels << endl;
}
