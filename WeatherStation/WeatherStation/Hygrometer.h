#pragma once

using namespace std;
class Hygrometer
{
public:
	Hygrometer();
	~Hygrometer();

	int humidity;
	int dryBulb;
	int wetBulb;

	void HumidCalc(int dryBulb, int wetBulb);
	void SendData();
	void update();
};

