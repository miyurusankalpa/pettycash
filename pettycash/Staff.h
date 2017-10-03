#pragma once

#include "User.h"

class Staff : public User
{
private:
	int PIN;
	string name;
	float balance;
	float limits;
	
public:
	Staff();
	void changePIN(int oldPIN, int newPIN);
	void setLimit( float limit );
	void changeBal( float req );
	void viewBal( void );
	~Staff();
};

