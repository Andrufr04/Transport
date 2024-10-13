#pragma once
#include "Air_Transport.h"
class Airplane : public Air_Transport
{
	double wingspan;
public:
	Airplane();
	Airplane(double max, string material, double maxH, double wing);
	void Output();
	double culcTwoWingspane();
};