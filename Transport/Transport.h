#pragma once

#include <iostream>

using namespace std;

class Transport
{
protected:
	double maxSpeed;
	string bodyMaterial;
public:
	Transport();
	Transport(double max, string material);
	void Output();
	void travelTime(double km);
};

