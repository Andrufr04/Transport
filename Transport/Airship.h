#pragma once
#include "Air_Transport.h"
class Airship : public Air_Transport
{
	string gasType;
	double GasConsumption;
public:
	Airship();
	Airship(double max, string material, double maxH, int BladesNum, string gas, double GasCons);
	void Output();
	double gaeConsumPerDistance(double dist);
};

