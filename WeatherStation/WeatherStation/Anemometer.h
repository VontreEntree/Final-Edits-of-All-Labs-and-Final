#pragma once
#include <cstdlib>
#include <iostream>
#include <string>;

using namespace std;
class Anemometer
{
public:
	Anemometer();
	~Anemometer();

	int windSpeed;
	string windDirection = "";
	bool isBlowing;

	int CupRotation(int windSpeed);
	void VanePoint(string windDirection);
	void SendData();
	void update();
};

