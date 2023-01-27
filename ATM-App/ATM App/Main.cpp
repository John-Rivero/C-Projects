#include <iostream>
#include <string>
#include "atmAccount.h"

using namespace std;


int main()
{
	atmAccount customerAccount(5000.00);

	cout << "Welcome to the ATM App" << endl;
	cout << "Your current balance is: $5000" <<endl;
	cout <<"What would you like to do? (1) for deposit, (2) for withdrawal, (3) to quit" <<endl;
	int userInput;
	cin >> userInput;

	while (userInput != 3)
	{

		if (userInput == 1)
		{
			double depositAmount;
			cout << "How much would you like to deposit? ";
			cin >> depositAmount;
			customerAccount.setDeposit(depositAmount);
			cout << "Your current balance: " <<customerAccount.getBalance() << endl;
		}

		else if (userInput == 2)
		{
			double withdrawAmount;
			cout << "How much would you like to withdraw? ";
			cin >> withdrawAmount;
			customerAccount.setWithdraw(withdrawAmount);
			cout << "Your current balance: " << customerAccount.getBalance() <<endl;
		}

		cout << "What would you like to do? (1) for deposit, (2) for withdrawal, (3) to quit" << endl;
		cin >> userInput;


	}
	
	cout << "Thank you for choosing the ATM app.";

	return 0;
}