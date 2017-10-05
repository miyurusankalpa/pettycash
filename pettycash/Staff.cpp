#include "stdafx.h"
#include "Staff.h"
#include <iostream>

using namespace std;

Staff::Staff(int newPIN) : User(newPIN)
{
	balance = 0;
}

void Staff::setLimit(float limit)
{
	balance = limit;
	limits = limit;
}

void Staff::changeBal(float req)
{
	balance = balance - req;
	cout<<"Request Procceded"<<endl;
}

void Staff::viewBal(void)
{
  cout<<"Limit   : "<<limits<<endl;
  cout<<"Balance : "<<balance <<endl;
}

Staff::~Staff()
{
}
