#pragma once
#include <string>
using namespace std;

class User
{
protected:
	int PIN;
	string name;
public:
	User();
	User(int PIN, string name);
	void changePIN(int oldPIN, int newPIN);
	~User();
};
