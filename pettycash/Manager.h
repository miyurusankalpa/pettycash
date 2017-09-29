// Manager.h
// 27-09-2017
/* Name: Manager
   ===========================================
   Responsibilities	   |	Collaborations
   ------------------------+------------------
   View monthly reports.   |	Account
   View remaining funds.   |	Staff
   Change login PIN.	   |			*/

#pragma once
class Manager:public User
{
public:
	Manager();
	~Manager();
};

