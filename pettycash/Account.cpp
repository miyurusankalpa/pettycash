#include "stdafx.h"
#include "Account.h"

#include <iostream>

using namespace std;

Account::Account(double bal)
{
	accountBal = bal;
}

void Account::Deposit(int amt) {
	accountBal = accountBal + amt;
}

void Account::Withdaraw(int amt) {
	accountBal = accountBal - amt;
}

float Account::viewBalance() {
	return accountBal;
}
/*
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
*/
Account::~Account()
{
}
