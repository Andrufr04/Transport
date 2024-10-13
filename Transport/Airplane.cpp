#include "Airplane.h"

Airplane::Airplane() : Air_Transport()
{
	wingspan = 0;
}

Airplane::Airplane(double max, string material, double maxH, double wing) : Air_Transport(max, material, maxH)
{
	wingspan = wing;
}

void Airplane::Output()
{
	Air_Transport::Output();
	cout << "Wingspane: " << wingspan << endl;
}

double Airplane::culcTwoWingspane()
{
	return wingspan*2;
}
