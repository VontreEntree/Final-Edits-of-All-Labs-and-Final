#include <iostream>
#include <string>
#include "Payment.h"
using namespace std;

#pragma once
class Machine : Payment
{
public:
	Machine();
	~Machine();

	string fName;
	string lName;

	string startCity = "Seattle";
	string startState = "WA";
	string startLoc[2] = { startCity, startState };

	string endCity = "Los Angeles";
	string endState = "CA";
	string endLoc[2] = { startCity, startState };

	int areaCode = 0;
	int firstSet = 0;
	int secondSet = 0;
	int pNum[3] = {areaCode, firstSet, secondSet};

	string streetName;
	string city;
	int zipCode;
	string address[3] = {streetName, city, zipCode};



	void Destination();
	string Name();
	int PhoneNumber();
	string Address();
};

