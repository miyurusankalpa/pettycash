#include "stdafx.h"
#include "PettyCashier.h"
#include <iostream>

using namespace std;

PettyCashier::PettyCashier(int newPIN): User(newPIN)
{
  PIN = newPIN;
}

void PettyCashier::addFunds(int amt)
{
	Account_main.Deposit(amt);
	cout << "**Added funds**\n" << endl;
}

void PettyCashier::retrieveAccReports()
{
  cout<<"**Account Usage Report**\n"<<endl;
}

void PettyCashier::setTransactions()
{
  cout<<"**Transactions**\n"<<endl;
}

PettyCashier::~PettyCashier()
{
}
