#include "stdafx.h"
#include "RainGauge.h"


RainGauge::RainGauge()
{
}


RainGauge::~RainGauge()
{
}


int RainGauge::BucketTip()
{
	if (isFull == true)
	{
		cout << "The limit of 36 inches of rain water has been reached./nEmptying current contents to continue process." << endl;
		rainInches = 0;
	}
	else
	{
		cout << "The limit has not been reached yet,/ncurrent contents can not be emptied until requirements are met." << endl;
	}

	return rainInches;
}

void RainGauge::DefrostEffect(int liquidTemp)
{
	if (rainInches >= 36)
	{
		isFull = true;
		BucketTip();
	}
	else if (liquidTemp <= 20)
	{
		isFreezing = true;
	}

	if (isFreezing == true)
	{
		liquidTemp = rand() % 60 + 30;
		cout << "Water has been heated to prevent the water to freeze./nWater is now " << liquidTemp << " degrees." << endl;
	}
}

void RainGauge::SendData()
{

}

void RainGauge::update()
{

}