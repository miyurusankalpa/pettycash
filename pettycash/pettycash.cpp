// pettycash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "User.h"
#include "PettyCashier.h"
#include "Administrator.h"
#include "Staff.h"
#include "Manager.h"

#include <iostream>

using namespace std;

int main()
{	
	int d=1;

	while (d!=0)
	{

		cout << "Enter the number of your role to login:" << endl;
		cout << "1 : Staff \n2 : Petty Cashier \n3 : Manager \n4 : Admin" << endl;

		int userVar;
		cin >> userVar;

		switch (userVar) {
		case 1: {
			cout << "Logged in as Staff" << endl;
			break;
		}
		case 2: {
			cout << "Logged in as Petty Cashier" << endl;
			break;
		}
		case 3: {
			cout << "Logged in as Manager" << endl;
			break;
		}
		case 4: {
			cout << "Logged in as Admin" << endl;
			break;
		}
		default: {
			cout << "Invalid number" << endl;
			continue;
		}
		}

		if (userVar == 1) {
			//create a test staff user
			Staff Staff1(1234);
			Account Account_main(1000);

			cout << "Please enter your login PIN" << endl;
			int acPIN;
			cin >> acPIN;

			//login in
			if (Staff1.verifyPIN(acPIN) == 1)
			{
				Staff1.viewBal();
			}
			else 
			{
				cout << "Invalid PIN" << endl;
			}

			Staff1.Withdraw(100, Account_main);


			/*cout << "Please enter your account No" << endl;
			int acNo;
			cin >> acNo;*/
		}

		//testing user cases 8, with the help of inhertance
		if (userVar == 2) {
			//inizialze petty casheir with a pin 1234
			PettyCashier PettyCashier1(1234);

			cout << "Please enter your account old PIN" << endl;
			int oldPIN;
			cin >> oldPIN;

			cout << "Please enter your account new PIN" << endl;
			int newPIN;
			cin >> newPIN;

			PettyCashier1.changePIN(oldPIN, newPIN);
			PettyCashier1.addFunds(100);


			cout << PettyCashier1.verifyPIN(oldPIN) << endl;
			cout << PettyCashier1.verifyPIN(newPIN) << endl;
		}

		if (userVar == 3) {
			Manager Manager1(1234);

			Manager1.viewMonthlyReport();
		}

		if (userVar == 4) {
			//inizialze New Admin
			Administrator Administrator1(1,2222);

			//create staff account
			Staff *Staff1;

			Staff1 = new Staff(123);

			Administrator1.AddUser(Staff1);
			//Administrator1.RemoveUser(1);
		}

		cout << "Enter 0 to exit, 1 to continue : ";
		cin >> d;
	}


	cout << "Exiting..";
    return 0;
}

