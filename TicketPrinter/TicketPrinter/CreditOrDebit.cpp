#include "stdafx.h"
#include "CreditOrDebit.h"


CreditOrDebit::CreditOrDebit()
{
}


CreditOrDebit::~CreditOrDebit()
{
}

void CreditOrDebit::EnterCardNumber()
{
	do {

		
		if (set1 > 9999)
		{
			cout << "Please enter the first set of digits of your credit/debit card" << endl;
			cin >> set1;
		}
		if (set2 > 9999)
		{
			cout << "Please enter the second set of digits of your credit or debit card" << endl;
			cin >> set2;
		}
		if (set3 > 9999)
		{
			cout << "Please enter the third set of digits of your credit or debit card" << endl;
			cin >> set3;
		}
		if (set4 > 9999)
		{
			cout << "Please enter the fourth set of digits of your credit or debit card" << endl;
			cin >> set4;
		}
	} while (set1 && set2 && set3 && set4 == 0);

	CardNumber[set1, set2, set3, set4];

}

void CreditOrDebit::EnterCardHolder()
{
	int nameCount = 0;
	do
	{
		if (nameCount == 0)
		{
			cout << "Please provide your first name" << endl;
			cin >> fName;

			cout << "Please provide your middle name" << endl;
			cin >> mName;

			cout << "Please provide your last name" << endl;
			cin >> lName;
		}
		if (fName != "" && mName != "" && lName != "")
		{
			cout << "Is this your name? 1 if yes, 0 if no" << endl;
			cout << fName << " " << mName << " " << lName << endl;
			cin >> nameCount;
		}
	} while (nameCount != 1);

	//Name[fName, mName, lName];
	ExpirationDate();
}

void CreditOrDebit::ExpirationDate()
{
	cout << "Enter the expiration month" << endl;
	cin >> expMonth;
	cout << "Enter the expiration year" << endl;
	cin >> expYear;
	if ((expMonth > 0 && expMonth <= 12) && (expYear > 2015 && expYear <= 2021))
	{
		ExpDate[expMonth, expYear];
	}
	else
	{
		cout << "There was a problem, one or both of the previous fields entered were beyond its limits./nTry again." << endl;
		cout << "/nEnter the expiration month" << endl;
		cin >> expMonth;
		cout << "Enter the expiration year" << endl;
		cin >> expYear;
	}

	SecurityCode();
}

void CreditOrDebit::SecurityCode()
{
	cout << "Please enter your security code" << endl;
	cin >> secNum;
	if (secNum > 999)
	{
		cout << "There was a problem, the previous field entered went beyond its limits./nTry again." << endl;
		cout << "/nPlease enter your security code" << endl;
		cin >> secNum;
	}

	TypeOfPayment();
}


void CreditOrDebit::ValidatePayment()
{
	cout << "All right, we are all set here./nPrinting the ticket now..." << endl;
}

void CreditOrDebit::TypeOfPayment()
{
	int payMethod = 0;
	do
	{
		
		cout << "Are you paying with Credit or Debit? 1 for Credit, 2 for Debit" << endl;
		cin >> payMethod;

		if (payMethod == 1)
		{
			cardType = "Credit";
		}
		else if (payMethod == 2)
		{
			cardType = "Debit";
		}
		else
		{
			cout << "There was a problem, the previous field entered went beyond its limits./nTry again." << endl;
			cout << "Are you paying with Credit or Debit? 1 for Credit, 2 for Debit" << endl;
			cin >> payMethod;
		}
	} while(payMethod != 1 || 2);

	cout << "Great, Now we will check your accounts balance." << endl;

	ValidatePayment();
}