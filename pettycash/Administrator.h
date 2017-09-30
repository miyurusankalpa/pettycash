#pragma once
class Administrator
{
private:

	char Admin_ID[10];
	char Acc_Pin[10];
	char User_Name[50];
	char User_Id[10];
	char User_Pin[10];

public:

	Administrator();
	Administrator(char pAdmin_ID[10],char pAcc_Pin[10],char pUser_Name[50],char pUser_Id[10],char pUser_Pin[10]);
	void SetAccountPin();
	void AddUser();
	void RemoveUser();
	~Administrator(void);
};

