#include "stdafx.h"
#include "Thermometer.h"


Thermometer::Thermometer()
{
}


Thermometer::~Thermometer()
{
}


int Thermometer::ElecSensor(int temp)
{
	int sensorHeat = 0;

	if (sensorHeat < -40)
	{
		isFreezing = true;
		temp = sensorHeat;
	}
	else if (sensorHeat >= 85)
	{
		isBlazing = true;
		temp = sensorHeat;
	}
	else
	{
		temp = sensorHeat;
	}

	cout << "It is currently " << temp << " degrees," << endl;
	if (isFreezing == true)
	{
		cout << "/nand it is freezing cold outside!" << endl;
	}
	else if (isBlazing == true)
	{
		cout << "/nand it is blazing hot outside!" << endl;
	}
	return temp;

}

void SendData()
{

}

void update()
{

}