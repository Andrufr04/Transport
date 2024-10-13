#include <iostream>

#include "Auto.h"
#include "Railway.h"
#include "HoursDrawn.h"
#include "Tanker.h"
#include "Boat.h"
#include "MotorShip.h"
#include "Airplane.h"
#include "Helicopter.h"
#include "Airship.h"

using namespace std;

int main() 
{
    cout << "\tGroud transport: " << endl;

    cout << "AUTO" << endl;
    Auto myCar(180.0, "Metal", 4, "V8", 10.0, 15000.0);
    myCar.Output();
    double fuelNeeded = myCar.culcFuelConsumption(250);
    cout << "Fuel needed for " << 250 << " km: " << fuelNeeded << " liters" << endl;
    cout << endl;

    cout << "RAILWAY" << endl;
    Railway myTrain(120, "Steel", 8, 10);
    myTrain.Output();
    myTrain.travelTime(120);
    cout << endl;

    cout << "HOURSDRAWN" << endl;
    HoursDrawn cart(150.0, "Wood", 2, "Horse", 3, 500.0, 200.0);
    cart.Output();
    double maxLoad = cart.MaxLoad();
    cout << "Maximum load capacity: " << maxLoad << " kg" << endl;
    cout << endl;


    cout << endl << "\tWater transport: " << endl;

    cout << "TANKER: " << endl;
    Tanker myTanker(80, "Steel", 20, 5, 1000, 30);
    myTanker.Output();
    double cargoVolume = myTanker.calcCargoVolume();
    cout << "Total cargo volume: " << cargoVolume << " m3" << endl;
    cout << endl;

    cout << "BOAT: " << endl;
    Boat myBoat(50.0, "Wood", 15, 6, false);
    myBoat.Output();
    cout << endl;

    cout << "MOTOR SHIP: " << endl;
    MotorShip myShip(60.0, "Steel", 200.0, 100, 4);
    myShip.Output();
    int lifeboatSeats = 25;
    myShip.enoughLifeboats(lifeboatSeats);
    cout << endl;


    cout << endl << "\tAir transport: " << endl;

    cout << "AIRPLANE: " << endl;
    Airplane plane(800, "Aluminum", 10000, 55.5);
    plane.Output();
    cout << "Double Wingspan: " << plane.culcTwoWingspane() << endl;
    cout << endl;

    cout << "HELICOPTER: " << endl;
    Helicopter heli(250, "Titanium", 6000, 4);
    heli.Output();
    cout << endl;

    cout << "AIRSHIP: " << endl;
    Airship airship(200, "Carbon Fiber", 5000, 4, "Helium", 1.5);
    airship.Output();
    double distance = 100;
    cout << "Gas consumption for " << distance << " km: " << airship.gaeConsumPerDistance(distance) << " m3" << endl;





    return 0;
}
