#pragma once
#include "Water_Transport.h"
class Tanker : public Water_Transport
{
	int NumCompartments;
	double volumeOfCompartments;
	int lifeboats;
public:
	Tanker();
	Tanker(double max, string material, double displ, int CompNum, double CompVolum, int lifeboats);
	void Output();
	double calcCargoVolume();
};

