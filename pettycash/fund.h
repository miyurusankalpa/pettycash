#pragma once
class fund
{
private:
	int fundBal;
public:
	fund();
	void AddtoFund(int amt);
	void Withdaraw(int amt);
	void printbal();
	~fund();
};

