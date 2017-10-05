#include "stdafx.h"
#include "Administrator.h"

#include <iostream>

using namespace std;

Administrator::Administrator(void)
{
}

Administrator::Administrator(int pAdmin_ID, int pAcc_Pin, char pUser_Name[50], int pUser_Id, int pUser_Pin)
{
	Admin_ID = pAdmin_ID;
	Acc_Pin = pAcc_Pin;
	User_Name[50] = pUser_Name[50];
	User_Id = pUser_Id;
	User_Pin = pUser_Pin;
}

void Administrator::SetAccountPin(int pin)
{
	pin = Acc_Pin;
}

void Administrator::AddUser()
{
	cout << "**Add User**\n" << endl;
}

void Administrator::RemoveUser()
{
	cout << "**Remove User**\n" << endl;
}

Administrator::~Administrator(void)
{
}
