#pragma once
#include <string>
using namespace std;

class User
{
protected:
	int PIN;
	string name;
public:
	User(void);
	User(int PIN, string name);
	void changePIN(int oldPIN, int newPIN);
	~User();
};
