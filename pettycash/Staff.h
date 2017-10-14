#pragma once
#include "User.h"
#include "Account.h"

class Staff : public User
{
private:
	int withdrawLimit;
public:
	Staff(int newPIN);
	void setLimit(float limit);
	int Withdraw(double amt, Account accounts);
	void viewBal(void);
	~Staff();
};

