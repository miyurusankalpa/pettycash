#include "stdafx.h"
#include "Account.h"

#include <iostream>

using namespace std;

Account::Account(int acno,int accountPin)
{
	accountID = acno;
	accountBal = 0;
	accountPin = 1234;
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

Account::~Account()
{
}
