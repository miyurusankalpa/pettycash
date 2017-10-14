#pragma once
#include "User.h"
#include "Account.h"

class PettyCashier : public User, public Account
{
private:
	int PIN;
	int accBal;
public:
	PettyCashier(int nw_pin);
	void retrieveAccReports();
	void setTransactions();
	~PettyCashier();
};