#pragma once

class Account
{
private:
	double accountBal;
public:
	Account();
	Account(double bal);
	void Deposit(double amt);
	void Withdaraw(double amt);
	double viewBalance();
	~Account();
};
