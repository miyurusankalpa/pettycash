#include "stdafx.h"
#include "fund.h"
#include <iostream>

using namespace std;

fund::fund()
{
	fundBal = 0;
}

void fund::AddtoFund(int amt) {
	fundBal = fundBal + amt;
}

void fund::Withdaraw(int amt) {
	fundBal = fundBal - amt;
}

void fund::printbal() {
	cout << "Current Bal : " << fundBal << endl;
}

fund::~fund()
{
}
