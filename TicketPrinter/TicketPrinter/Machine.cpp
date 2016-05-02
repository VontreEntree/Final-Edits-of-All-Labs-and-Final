#include "stdafx.h"
#include "Machine.h"


Machine::Machine()
{
}


Machine::~Machine()
{
}

void Machine::Destination()
{

}

string Machine::Name()
{
	int nameCount = 0;
	do
	{
		if (nameCount == 0)
		{
			cout << "Please provide your first name" << endl;
			cin >> fName;

			cout << "Please provide your last name" << endl;
			cin >> lName;
		}
		if (fName != "" &&  lName != "")
		{
			cout << "Is this your name? 1 if yes, 0 if no" << endl;
			cout << fName <<  " " << lName << endl;
			cin >> nameCount;
		}
	} while (nameCount != 1);

	PhoneNumber();
}

int Machine::PhoneNumber()
{
	do {


		if (areaCode == 0)
		{
			do
			{
				cout << "Please enter the area code of your phone number" << endl;
				cin >> areaCode;
			} while (areaCode <= 0 || areaCode > 999);
		}
		if (firstSet <= 0)
		{
			do
			{
			cout << "Please enter the first three digits" << endl;
			cin >> firstSet;
			} while (firstSet <= 0 || firstSet > 999);
		}
		if (secondSet == 0)
		{
			do
			{
			cout << "Please enter the last four digits" << endl;
			cin >> secondSet;
			if (secondSet <= 0 || secondSet > 9999)
			{
				cout << "There was a problem, the previous field entered was beyond its limits./nTry again." << endl;
			}
			} while (secondSet <= 0 || secondSet > 9999);
		}

	} while (areaCode && firstSet && secondSet == 0);

	Address();
}

string Machine::Address()
{
	cout << "Enter the street for your address" << endl;
	cin >> streetName;

	cout << "Enter the city for your address" << endl;
	cin >> city;

	cout << "Enter the zip code for your address" << endl;
	cin >> zipCode;
	while (zipCode <= 0 || zipCode > 99999)
	{
		cout << "There was a problem, one or both of the previous fields entered were beyond its limits./nTry again." << endl;
		cout << "Enter the zip code for your address" << endl;
		cin >> zipCode;
	}

}