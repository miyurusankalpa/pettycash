#include "stdafx.h"
#include <string>

#pragma once

class User
{
protected:
	int PIN;
	string name;
public:
	User();
	User(int userPIN, string username);
	~User();
};
