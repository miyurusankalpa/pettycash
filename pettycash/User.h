#pragma once
#include <string>
using namespace std;

class User
{
protected:
	int uid;
	int PIN;
	string name;
public:
	User(void);
	User(int PIN);
	virtual void addUsername(string username);
	virtual void changePIN(int oldPIN, int newPIN);
	virtual int verifyPIN(int uPIN);
	~User();
};
