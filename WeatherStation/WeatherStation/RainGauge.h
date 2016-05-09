#pragma once
#include <cstdlib>
#include <iostream>

using namespace std;
class RainGauge
{
public:
	RainGauge();
	~RainGauge();

	int rainInches;
	bool isFull;
	bool isFreezing;
	int liquidTemp;


	int BucketTip();
	void DefrostEffect(int liquidTemp);
	void SendData();
	void update();
};

