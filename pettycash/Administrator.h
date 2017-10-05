#pragma once
class Administrator
{
private:
	int Admin_ID;
	int Acc_Pin;
	char User_Name[50];
	int User_Id;
	int User_Pin;
public:
	Administrator();
	Administrator(int pAdmin_ID,int pAcc_Pin,char pUser_Name[50], int pUser_Id, int pUser_Pin);
	void SetAccountPin(int pin);
	void AddUser();
	void RemoveUser();
	~Administrator(void);
};

