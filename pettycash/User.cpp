#include "stdafx.h"
#include "User.h"

//the inhertiance class for users

User::User(int userPIN, stirng username)
{
  PIN = userPIN;
  name = username;
}

User::changePIN(int oldPIN, int newPIN)
{
  if (PIN == oldPIN)
  {
    PIN = newPIN;
  }
}

User::~User()
{
}