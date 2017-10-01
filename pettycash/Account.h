#pragma once
class Account
{
private:
	int accountID;
	float accountBal;
	int accountPin;
public:
	Account(int acno, int acPin);
	void AddtoAccount(int amt);
	void Withdaraw(int amt);
	void printbal();
	void changePIN(int oldPIN, int newPIN);
	int verifyPIN(int PIN);
	~Account();
};

