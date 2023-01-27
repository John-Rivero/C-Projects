#include "atmAccount.h"
#include <iostream>
#include <string>
using namespace std;

atmAccount::atmAccount(double startingBalance)
{
	balance = startingBalance;
}

void atmAccount::setDeposit(double startingBalance)
{
	balance += startingBalance;
}

void atmAccount::setWithdraw(double startingBalance)
{
	balance -= startingBalance;
}

double atmAccount::getBalance()
{
	return balance;
}
