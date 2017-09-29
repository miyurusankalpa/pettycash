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
#inlclude <iostream>
#include "Manager.h"

Manager::Manager(int newPIN)
{
   PIN = newPIN;
}

Manager::viewMonthlyReport()
{
   cout<<"~~~ Monthly Report ~~~\n"<<endl;
}

Manager::viewRemainingFunds()
{
   cout<<"Remaining funds: Rs. "<<account.funds<<endl;
}

Manager::~Manager()
{
}
