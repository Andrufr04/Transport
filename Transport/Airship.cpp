#include "Airship.h"

Airship::Airship() : Air_Transport()
{
	gasType = "Unknown";
	GasConsumption = 0;
}

Airship::Airship(double max, string material, double maxH, int BladesNum, string gas, double GasCons) : Air_Transport(max, material, maxH)
{
	gasType = gas;
	GasConsumption = GasCons;
}

void Airship::Output() 
{
	Air_Transport::Output();
	cout << "Gas type: " << gasType << endl
		<< "Gas consumption: " << GasConsumption << endl;
}

double Airship::gaeConsumPerDistance(double dist)
{
	return dist * GasConsumption;
}
