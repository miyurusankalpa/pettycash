#include "stdafx.h"
#include "Account.h"

#include <iostream>

using namespace std;

Account::Account(int acno,int acPin)
{
	accountID = acno;
	accountBal = 0;
	accountPin = acPin;
}

void Account::AddtoAccount(int amt) {
	accountBal = accountBal + amt;
}

void Account::Withdaraw(int amt) {
	accountBal = accountBal - amt;
}

void Account::printbal() {
	cout << "Current Balance : " << accountBal << endl;
}

void Account::changePIN(int oldPIN, int newPIN)
{
	if (accountPin == oldPIN)
	{
		accountPin = newPIN;
	}
}

int Account::verifyPIN(int PIN)
{
	if (accountPin == PIN)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

Account::~Account()
{
}
