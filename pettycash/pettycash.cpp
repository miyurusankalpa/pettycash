// pettycash.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "fund.h"
#include <iostream>

using namespace std;

int main()
{	
	fund fund1;

	fund1.AddtoFund(1000);
	fund1.Withdaraw(500);

	fund1.printbal();

	int d;
	cin >> d;

    return 0;
}

