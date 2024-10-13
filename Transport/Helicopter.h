#pragma once
#include "Air_Transport.h"
class Helicopter : public Air_Transport
{
	int numOfBlades;
public:
	Helicopter();
	Helicopter(double max, string material, double maxH, int BladesNum);
	void Output();
};

