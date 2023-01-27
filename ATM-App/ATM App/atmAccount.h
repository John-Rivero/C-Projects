#pragma once
class atmAccount
{
private:
	double balance;

public:
	atmAccount(double startingBalance);
	void setDeposit(double startingBalance);
	void setWithdraw(double startingBalnce);
	double getBalance();
};