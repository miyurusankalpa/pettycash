#pragma once
#include "User.h"
#include "Account.h"

class PettyCashier : public User
{
private:
	int PIN;
	int accBal;
	Account Account_main;
public:
	PettyCashier(int nw_pin);
	void addFunds(int amt);
	void retrieveAccReports();
	void setTransactions();
	~PettyCashier();
};