#pragma once
class Account
{
private:
	int accountID;
	float accountBal;
	int accountPin;
public:
	Account(int acno, int accountPin);
	void AddtoFund(int amt);
	void Withdaraw(int amt);
	void printbal();
	~Account();
};

