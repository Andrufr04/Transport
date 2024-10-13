#include "Railway.h"

Railway::Railway() : Ground_Transport()
{
	numOfWagons = 0;
}

Railway::Railway(double max, string material, int wheels, int wagons) : Ground_Transport(max, material, wheels)
{
	numOfWagons = wagons;
}

void Railway::Output()
{
	Ground_Transport::Output();
	cout << "Number of wagons: " << numOfWagons << endl;
}
