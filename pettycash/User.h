#pragma once

class User
{
protected:
	int PIN;
	string username;
public:
	User();
	User(int PIN, string username);
	~User();
};
