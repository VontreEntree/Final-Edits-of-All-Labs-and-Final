#include "stdafx.h"
#include "Anemometer.h"


Anemometer::Anemometer()
{
}


Anemometer::~Anemometer()
{
}

int Anemometer::CupRotation(int windSpeed)
{
	while (isBlowing == true)
	{
		windSpeed = rand() % 60 + 0;
		return windSpeed;
	}
	VanePoint(windDirection);
}

void Anemometer::VanePoint(string windDirection)
{
	int directionCount;

	if (isBlowing == true)
	{
		directionCount = rand() % 4 + 1;
	}

	switch (directionCount)
	{
	case 1:
		windDirection = "North";
		cout << "The wind is blowing " << windDirection << " at " << windSpeed << " mph." << endl;
		break;
	case 2:
		windDirection = "East";
		cout << "The wind is blowing " << windDirection << " at " << windSpeed << " mph." << endl;
		break;
	case 3:
		windDirection = "South";
		cout << "The wind is blowing " << windDirection << " at " << windSpeed << " mph." << endl;
		break;
	case 4:
		windDirection = "West";
		cout << "The wind is blowing " << windDirection << " at " << windSpeed << " mph." << endl;
		break;
	default:
		cout << "Whoa, Im not sure how you got here but this isnt good." << endl;
		break;
	}
}

void Anemometer::SendData()
{

}

void Anemometer::update()
{

}