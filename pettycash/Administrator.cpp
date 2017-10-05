#include "StdAfx.h"
#include "Administrator.h"

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

}

void Administrator::RemoveUser()
{
}

Administrator::~Administrator(void)
{
}
