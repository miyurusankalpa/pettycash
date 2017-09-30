#pragma once
class Account
{
private:
	int accountID;
	float accountBal;
	int accountPin;
public:
	Account(int acno, int accountPin);
	void AddtoAccount(int amt);
	void Withdaraw(int amt);
	void printbal();
	~Account();
};

