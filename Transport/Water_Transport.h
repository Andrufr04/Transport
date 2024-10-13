#pragma once

#include "Transport.h"

class Water_Transport : public Transport
{
protected:
	double displacment;
public:
	Water_Transport();
	Water_Transport(double max, string material, double displ);
	void Output();
};

