#pragma once

class Account
{
private:
	double accountBal;
public:
	Account();
	Account(double bal);
	void Deposit(double amt);
	int Withdaraw(double amt);
	double viewBalance();
	~Account();
};
