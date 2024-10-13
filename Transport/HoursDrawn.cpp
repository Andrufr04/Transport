#include "HoursDrawn.h"

HoursDrawn::HoursDrawn() : Ground_Transport()
{
	tipeOfAnimal = "Unknown";
	numOfAnimal = 0;
	loadOnAnimal = 0;
	weightOfTheCart = 0;
}

HoursDrawn::HoursDrawn(double max, string material, int wheels, string animalTipe, int animalNum, double loadHours, double weightCart) : Ground_Transport(max, material, wheels)
{
	tipeOfAnimal = animalTipe;
	numOfAnimal = animalNum;
	loadOnAnimal = loadHours;
	weightOfTheCart = weightCart;
}

void HoursDrawn::Output()
{
	Ground_Transport::Output();
	cout << "Animal tipe: " << tipeOfAnimal << endl
		<< "Num of animal: " << numOfAnimal << endl 
		<< "Load on animal: " << loadOnAnimal << " kg" << endl
		<< "Weight of cage: " << weightOfTheCart << " kg" << endl;
}

double HoursDrawn::MaxLoad()
{
	return (numOfAnimal * loadOnAnimal) - weightOfTheCart;
}
