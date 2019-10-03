#include "stdafx.h"
#include "Account.h"
#include <iostream>

using namespace std;

Account::Account() {}

Account::Account(double bal)
{
	accountBal = bal;
	cout << "New account opened" << endl;
}

void Account::Deposit(double amt) {
	accountBal = accountBal + amt; // calculation
}

int Account::Withdaraw(double amt) {
	if (accountBal > amt) { // Ensure account balance remain positive.
		accountBal = accountBal - amt;
		return 0; // Acknowlege successful execution.
	} else {
		return 1; // Acknowledge withdraw failure.
	}
		
}

double Account::viewBalance() {
	return accountBal;
}

Account::~Account()
{
	cout << "Account closed" << endl; // display
}
