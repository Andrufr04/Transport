#include "Transport.h"

Transport::Transport()
{
	maxSpeed = 0;
	bodyMaterial = "Unknown";
}

Transport::Transport(double max, string material)
{
	maxSpeed = max;
	bodyMaterial = material;
}

void Transport::Output()
{
	cout << "Max speed: " << maxSpeed << " km/h" << endl
		<< "Body material: " << bodyMaterial << endl;
}

void Transport::travelTime(double km)
{
	cout << "Travel time: " << km / maxSpeed << " h" << endl;
}
