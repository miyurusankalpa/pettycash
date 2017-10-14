#pragma once
#include "User.h"
#include "Account.h"

class Staff : public User
{
private:
	
	Account *accounts[5];
public:
	Staff(int newPIN);
	void setLimit(float limit);
	void changeBal(float req);
	void viewBal(void);
	~Staff();
};

