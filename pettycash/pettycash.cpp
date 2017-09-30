// pettycash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Account.h"
#include "User.h"

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
		cout << "Logged in as Petty Cashier" << endl;
		break;
	}
	case 4: {
		cout << "Logged in as Petty Cashier" << endl;
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

	}


	Account Account1(1,1234);

	Account1.AddtoFund(1000);
	Account1.Withdaraw(500);

	Account1.printbal();

	int d;
	cin >> d;

    return 0;
}

