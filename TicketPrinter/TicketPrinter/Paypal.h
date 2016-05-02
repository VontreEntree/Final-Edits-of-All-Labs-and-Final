#include <iostream>
#include <string>

using namespace std;

#pragma once
class Paypal
{
public:
	Paypal();
	~Paypal();

	string email;
	string password;
	string password2;

	void AccountConfirm();
	void ValidatePayment();
};

