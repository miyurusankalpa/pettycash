#include "stdafx.h"
#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(int newPIN) : User(newPIN)
{
}

void Staff::setLimit(float limit)
{
	withdrawLimit = limit;
}

int Staff::Withdraw(double amt, Account accounts) {
	if (withdrawLimit > amt) { // Ensure account balance remain positive.
		accounts.Withdaraw(amt);
		return 0; // Acknowlege successful execution.
	}
	else {
		return 1; // Acknowledge withdraw failure.
	}

}

void Staff::viewBal(void)
{

	cout << "Balance : ";
	//accounts[1]->viewBalance();
}

Staff::~Staff()
{
}
