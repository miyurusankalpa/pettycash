#include "stdafx.h"
#include "Administrator.h"

#include <iostream>

using namespace std;


Administrator::Administrator(int pAdmin_ID, int pAcc_Pin)
{
	Admin_ID = pAdmin_ID;
	Acc_Pin = pAcc_Pin;
}

void Administrator::SetAccountPin(int pin)
{
	pin = Acc_Pin;
}

void Administrator::AddUser(Staff *user)
{
	users[0] = user;
	cout << "**Added User**\n" << endl;
}

void Administrator::RemoveUser(int uid)
{
	delete users[0];
	cout << "**Remove User**\n" << endl;
}

Administrator::~Administrator(void)
{
}
