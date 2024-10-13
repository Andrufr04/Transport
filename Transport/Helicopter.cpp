#include "Helicopter.h"

Helicopter::Helicopter() : Air_Transport()
{
	numOfBlades = 0;
}

Helicopter::Helicopter(double max, string material, double maxH, int BladesNum) : Air_Transport(max, material, maxH)
{
	numOfBlades = BladesNum;
}

void Helicopter::Output() 
{
	Air_Transport::Output();
	cout << "Num of blades: " << numOfBlades << endl;
}
