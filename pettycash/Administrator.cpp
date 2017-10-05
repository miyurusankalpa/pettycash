#include "StdAfx.h"
#include "Administrator.h"


Administrator::Administrator(void)
{
}
Administrator::Administrator(char pAdmin_ID[10],char pAcc_Pin[10],char pUser_Name[50],char pUser_Id[10],char pUser_Pin[10])
{
	Admin_ID[10] = pAdmin_ID[10];
	Acc_Pin[10] = pAcc_Pin[10];
	User_Name[50] = pUser_Name[50];
	User_Id[10] = pUser_Id[10];
	User_Pin[10] = pUser_Pin[10];
}
void Administrator::SetAccountPin(char pin[10])
{
	pin[10] = Acc_Pin[10];
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
