#pragma once
#include "Ground_Transport.h"
class HoursDrawn : public Ground_Transport
{
	string tipeOfAnimal;
	int numOfAnimal;
	double loadOnAnimal;
	double weightOfTheCart;
public:
	HoursDrawn();
	HoursDrawn(double max, string material, int wheels, string animalTipe, int animalNum, double loadHours, double weightOfTheCart);
	void Output();
	double MaxLoad();

};

