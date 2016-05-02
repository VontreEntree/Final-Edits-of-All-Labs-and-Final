#include "stdafx.h"
#include "Paypal.h"


Paypal::Paypal()
{
}


Paypal::~Paypal()
{
}

void Paypal::AccountConfirm()
{
	while (email.find_first_not_of != "@")
	{
		cout << "Please enter your email" << endl;
		cin >> email;
	}

	cout << "Okay, now enter a creative password" << endl;
	cin >> password;

	do
	{

		cout << "Re-enter your password for confirmation" << endl;
		cin >> password2;
	} while (password2 != password);
	
		if (password2 == password)
		{
			cout << "Great we are all signed in, now we will check if your account has enough for the ticket." << endl;
	}

		ValidatePayment();
}

void Paypal::ValidatePayment()
{
	cout << "All right, we are all set here./nPrinting the ticket now..." << endl;
}