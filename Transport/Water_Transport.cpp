#include "Water_Transport.h"

Water_Transport::Water_Transport() : Transport()
{
	displacment = 0;
}

Water_Transport::Water_Transport(double max, string material, double displ) : Transport(max, material)
{
	displacment = displ;
}

void Water_Transport::Output()
{
	Transport::Output();
	cout << "Diplacment: " << displacment << " m3" << endl;
}
