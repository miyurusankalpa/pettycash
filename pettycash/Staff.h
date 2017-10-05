#pragma once
#include "User.h"

class Staff : public User
{
private:
	int PIN;
	float balance;
	float limits;
public:
	Staff(int newPIN);
	void setLimit(float limit);
	void changeBal(float req);
	void viewBal(void);
	~Staff();
};

