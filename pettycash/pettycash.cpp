// pettycash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "User.h"
#include "PettyCashier.h"

#include <iostream>

using namespace std;

int main()
{	

	cout << "Enter the number of your role to login:" << endl;
	cout <<  "Staff -\t1\nPetty Cashier -\t2\nManager -\t3\nAdmin -\t4" << endl;

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
		return 0;
		}
	}

	if (userVar == 1) {
		cout << "Please enter your account No" << endl;
		int acNo;
		cin >> acNo;

		cout << "Please enter your account PIN" << endl;
		int acPIN;
		cin >> acPIN;

		//in a noraml situation this is where the accounts are taken from a database
		Account Account1(acNo, 1234);

		if (Account1.verifyPIN(acPIN) == 1)
		{
			Account1.AddtoAccount(1000);
			Account1.Withdaraw(500);

			Account1.printbal();
		}
		else {
			cout << "Invalid PIN" << endl;
		}
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

		cout << PettyCashier1.verifyPIN(oldPIN) << endl;
		cout << PettyCashier1.verifyPIN(newPIN) << endl;
	}

	int d;
	cin >> d;

    return 0;
}

