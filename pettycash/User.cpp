#include "stdafx.h"
#include "User.h"

#include <iostream>

using namespace std;

//the inhertiance class for users

User::User(void)
{
}

User::User(int userPIN)
{
  PIN = userPIN;
}

void User::addUsername(string uname)
{
	name = uname;
	cout << "Added username " << name << " to the user" << endl;
}

void User::changePIN(int oldPIN, int newPIN)
{
  if (PIN == oldPIN)
  {
    PIN = newPIN;
  }
}

int User::verifyPIN(int uPIN)
{
	if (PIN == uPIN)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
User::~User()
{
}
