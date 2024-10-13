#pragma once

#include "Ground_Transport.h"

class Auto : public Ground_Transport
{
	string engineTipe;
	double fuleConsumption;
	double mileage;
public:
	Auto();
	Auto(double max, string material, int wheels, string engineT, double fule, double mileage);
	void Output();
	double culcFuelConsumption(double km);
};

