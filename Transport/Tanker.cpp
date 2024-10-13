#include "Tanker.h"

Tanker::Tanker() : Water_Transport()
{
	NumCompartments = 0;
	volumeOfCompartments = 0;
	lifeboats = 0;
}

Tanker::Tanker(double max, string material, double displ, int CompNum, double CompVolum, int lifebo) : Water_Transport(max, material, displ)
{
	NumCompartments = CompNum;
	volumeOfCompartments = CompVolum;
	lifeboats = lifebo;
}

void Tanker::Output()
{
	Water_Transport::Output();
	cout << "Num compartments: " << NumCompartments << endl
		<< "Volume of compartments: " << volumeOfCompartments << endl
		<< "Num lifeboats: " << lifeboats << endl;
}

double Tanker::calcCargoVolume()
{
	return NumCompartments * volumeOfCompartments;
}
