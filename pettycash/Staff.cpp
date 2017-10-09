#include "stdafx.h"
#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(int newPIN) : User(newPIN)
{
	accounts[1] = new Account(1, newPIN);
}

void Staff::setLimit(float limit)
{
	balance = limit;
	limits = limit;
}

void Staff::changeBal(float req)
{
	accounts[1]->Withdaraw(req);
	cout << "Request Procceded" << endl; 
}

void Staff::viewBal(void)
{

	cout << "Balance : ";
	accounts[1]->viewBalance();
}

Staff::~Staff()
{
}
