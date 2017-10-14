#pragma once
class Account
{
private:
	float accountBal;
public:
	Account(int acno, int acPin);
	void Deposit(int amt);
	void Withdaraw(int amt);
	float viewBalance();
	void changePIN(int oldPIN, int newPIN);
	int verifyPIN(int PIN);
	~Account();
};
