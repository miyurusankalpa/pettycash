#include "stdafx.h"
#include "PettyCashier.h"
#include <iostream>

using namespace std;

PettyCashier::PettyCashier(int newPIN)
{
  PIN = newPIN;
}

void pettyCashier::withdrawPettyCash(int amount)
{
  accBal = accBal - amount;   
}

void pettyCashier::retrieveAccReports()
{
  cout<<"**Account Usage Report**\n"<<endl;
}

void pettyCashier::setTransactions()
{
  cout<<"**Transactions**\n"<<endl;
}

PettyCashier::~PettyCashier()
{
}
