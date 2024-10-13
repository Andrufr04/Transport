#pragma once

#include "Transport.h"

class Ground_Transport : public Transport
{
protected:
	int numOfWheels;
public:
	Ground_Transport();
	Ground_Transport(double max, string material, int wheels);
	void Output();
};

