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
#include "Account.h"

class Manager : public User
{
private:
	Account *accounts[5];
public:
	Manager(int newPIN);
	void viewMonthlyReport();
	void viewRemainingFunds();
	// Function changeUserPIN inherited from User class.
	~Manager();
};
