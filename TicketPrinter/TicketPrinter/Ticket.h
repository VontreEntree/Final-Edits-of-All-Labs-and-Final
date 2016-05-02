#include <iostream>
#include <string>
#include <ctime>
#include "Machine.h"
using namespace std;

#pragma once
class Ticket
{
public:
	Ticket();
	~Ticket();

	int price;

	int departMonth;
	int departDay;
	int departYear = 2016;
	int departDate[3] = {departMonth, departDay, departYear};

	void PriceCalc();

	void AddTicket();
	void TicketType();
	void OneWay();
	void RoundTrip();
	void DepartTime()
	{
		char time[10];
			_strtime(time);
			cout << time << endl;
		
	}

	void Baggage();

	void RideClass();

	void DepartDate()
	{
		char date[10];
		_strdate(date);
		cout << date << endl;
	}
	void AgeOfTraveler();
	void ETA();
};

