#pragma once
class Account
{
private:
	float accountBal;
public:
	Account();
	Account(double bal);
	void Deposit(double amt);
	void Withdaraw(double amt);
	float viewBalance();
	~Account();
};
