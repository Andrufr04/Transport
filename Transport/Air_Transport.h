#pragma once

#include "Transport.h"

class Air_Transport : Transport
{
protected:
	double maxHeight;
public:
	Air_Transport();
	Air_Transport(double max, string material, double maxH);
	void Output();
};

