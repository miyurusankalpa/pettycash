// Manager.cpp
// 27-09-2017
/* Name: Manager
   ===========================================
   Responsibilities	   |	Collaborations
   ------------------------+------------------
   View monthly reports.   |	Account
   View remaining funds.   |	Staff
   Change login PIN.       |                    */

#include "stdafx.h"
#include "Manager.h"
#include <iostream>

using namespace std;

Manager::Manager(int newPIN) : User(newPIN)
{
   PIN = newPIN;
   accounts[1] = new Account(1, newPIN);
}

void Manager::viewMonthlyReport()
{
   cout<<"~~~ Monthly Report ~~~\n"<< accounts[1]->viewBalance() << endl;
}

void Manager::viewRemainingFunds()
{
   cout<<"Remaining funds: Rs. "<<endl;
}

Manager::~Manager()
{
}
