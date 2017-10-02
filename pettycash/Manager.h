#pragma once
// Manager.h
// 27-09-2017
/* Name: Manager
   ===========================================
   Responsibilities	   |	Collaborations
   ------------------------+------------------
   View monthly reports.   |	Account
   View remaining funds.   |	Staff
   Change login PIN.	   |			*/

#include "User.h"

class Manager : public User
{
private:
	int PIN;
public:
	Manager(int newPIN);
	void viewMonthlyReport();
	void viewRemainingFunds();
	~Manager();
};