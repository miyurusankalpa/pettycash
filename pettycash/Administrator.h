#pragma once
#include "Staff.h"

class Administrator
{
private:
	int Admin_ID;
	int Acc_Pin;
	Staff *users[5];
public:
	Administrator(int pAdmin_ID,int pAcc_Pin);
	void SetAccountPin(int pin);
	void AddUser(Staff *user);
	void RemoveUser(int uid);
	~Administrator(void);
};

