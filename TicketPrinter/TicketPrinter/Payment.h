#include "Cash.h";
#include "Paypal.h";
#include "CreditOrDebit.h";
#pragma once
class Payment : CreditOrDebit, Paypal, Cash
{
public:
	Payment();
	~Payment();



	void PaymentMethod();
};

