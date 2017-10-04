#pragma once
#include "User.h"

class PettyCashier : public User
{
private:
	int PIN;
	int accBal;
public:
	PettyCashier(int nw_pin);
	void withdrawPettyCash(int amount);
	void retrieveAccReports();
	void setTransactions();
	~PettyCashier();
};