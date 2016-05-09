#include "stdafx.h"
#include "Barometer.h"


Barometer::Barometer()
{
}


Barometer::~Barometer()
{
}


void Barometer::RiseInPressure()
{	
	if (newPressure > pressure)
	{
		pressure = newPressure;
	}

	cout << "The pressure has changed to " << pressure << " pounds per sq. inch." << endl;
}
void Barometer::FallInPressure()
{
	
	if (newPressure < pressure)
	{
		pressure = newPressure;
	}

	cout << "The pressure has changed to " << pressure << " pounds per sq. inch." << endl;
}
void Barometer::NeddlePlacement()
{
	newPressure = rand() % 25 + 10;

	if (newPressure > pressure)
	{
		RiseInPressure();
	}
	else if (newPressure < pressure)
	{
		FallInPressure();
	}

	
}
void Barometer::SendData()
{

}
void Barometer::update()
{

}