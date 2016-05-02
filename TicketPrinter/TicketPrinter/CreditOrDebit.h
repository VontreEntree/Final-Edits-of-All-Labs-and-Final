#include <iostream>
#include <string>

using namespace std;

#pragma once
class CreditOrDebit
{
public:
	CreditOrDebit();
	~CreditOrDebit();

	int secNum;
	string cardType;


	int setLen = 4;

	int set1;
	int set2;
	int set3;
	int set4;
	int CardNumber[4] = { set1, set2, set3, set4 };

	int expMonth = 0;
	int expYear = 0;
	int ExpDate[2] = { expMonth, expYear};

	string fName = "";
	string mName = "";
	string lName = "";
	string Name[3] = {fName, mName, lName};

	void EnterCardNumber();
	void EnterCardHolder();
	void ExpirationDate();
	void SecurityCode();


	void ValidatePayment();
	void TypeOfPayment();
};

