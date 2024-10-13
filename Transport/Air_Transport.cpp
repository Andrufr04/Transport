#include "Air_Transport.h"

Air_Transport::Air_Transport() : Transport()
{
	maxHeight = 0;
}

Air_Transport::Air_Transport(double max, string material, double maxH) : Transport(max, material)
{
	maxHeight = maxH;
}

void Air_Transport::Output()
{
	Transport::Output();
	cout << "Max height: " << maxHeight << " km" << endl;
}
