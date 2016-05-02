#include <iostream>
#include <string>
#include "Ticket.h"
using namespace std;

#pragma once
class TicketMachine : Ticket
{
public:
	TicketMachine();
	~TicketMachine();


	void ValidateTrip();
	void Finalize();
	void PrintTicket();

};

