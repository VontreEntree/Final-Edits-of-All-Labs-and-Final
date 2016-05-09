#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;
class Barometer
{
public:
	Barometer();
	~Barometer();

	double pressure = 14.5;
	double newPressure = rand() % 25 + 10;

	void RiseInPressure();
	void FallInPressure();
	void NeddlePlacement();
	void SendData();
	void update();

};

