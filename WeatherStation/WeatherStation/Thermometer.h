#pragma once
#include <iostream>

using namespace std;
class Thermometer
{
public:
	Thermometer();
	~Thermometer();

	int temp;
	bool isFreezing;
	bool isBlazing;

	int ElecSensor(int);
	void SendData();
	void update();

};

