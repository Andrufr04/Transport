#include <iostream>

#include "Auto.h"

using namespace std;


Auto::Auto() : Ground_Transport()
{
	engineTipe = "Unknown";
	fuleConsumption = 0;
	mileage = 0;
}

Auto::Auto(double max, string material, int wheels, string engineT, double fule, double m) : Ground_Transport(max, material, wheels)
{
	engineTipe = engineT;
	fuleConsumption = fule;
	mileage = m;
}

void Auto::Output()
{
	Ground_Transport::Output();
	cout << "Engine Tipe: " << engineTipe << endl
		<< "Fule Consumtion: " << fuleConsumption << endl
		<< "Mileage: " << mileage << endl;
}

double Auto::culcFuelConsumption(double km)
{
	return fuleConsumption / 100 * km;
}
