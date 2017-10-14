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
   accounts = new Account(1);
}

void Manager::viewMonthlyReport()
{
   cout<<"~~~ Monthly Report ~~~\n"<< accounts->viewBalance() << endl;
}

void Manager::viewRemainingFunds()
{
   cout<<"Remaining funds: Rs. "<<endl;
}

Manager::~Manager()
{
}
