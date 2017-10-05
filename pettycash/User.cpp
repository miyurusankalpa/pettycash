#include "stdafx.h"
#include "User.h"

//the inhertiance class for users

User::User(void)
{
}

User::User(int userPIN, string username)
{
  PIN = userPIN;
  name = username;
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
