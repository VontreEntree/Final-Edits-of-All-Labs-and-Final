#include "stdafx.h"
#include "Payment.h"


Payment::Payment()
{
}


Payment::~Payment()
{
}

void Payment::PaymentMethod()
{
	int option = 0;

	cout << "How would you be purchasing the ticket(s)? 1 for Cash, 2 for Credit/Debit, 3 for PayPal" << endl;
	cin >> option;
	if (option == 1)
	{
		Cash::ValidateAmount();
	}
	else if (option == 2)
	{
		CreditOrDebit::EnterCardNumber();
	}
	else if (option == 3)
	{
		Paypal::AccountConfirm();
	}
}