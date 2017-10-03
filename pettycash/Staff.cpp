#include "stdafx.h"
#include "Staff.h"


Staff::Staff()
{
  
}

void Staff::changePIN(int oldPIN, int newPIN)
{
  PIN = userPIN;
  name = username;
} 
void setLimit( float limit )
{
  balance = limit;
  limits = limit;
}  
void changeBal( float req )
{
  balance = balance - req
  cout<<"Request Procceded"<<endl;
}
void viewBal( void )
{
  cout<<"Limit   : "<< limits<<endl;
  cout<<"Balance : "<< balance<<endl;
} 
Staff::~Staff()
{
}
