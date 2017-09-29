#include "stdafx.h"
#include <string>

#pragma once

class User
{
protected:
	int userPIN;
	string username;
public:
	User();
	User(int PIN, string username);
	~User();
};
