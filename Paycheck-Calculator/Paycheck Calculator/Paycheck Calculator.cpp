#include <iostream>
#include <string>
#include <memory>
using namespace std;

class paycheckCalculator
{
private:
	string name;
	double paycheck, hourlyRate, hoursWorked;


public:

	void getInfo()
	{
		cout << "Welcome to The Paycheck Calculator App" << endl;

		cout << "Enter the hours you worked for this week." << endl;
		cin >> hoursWorked;

		cout << "Enter your hourly rate." << endl;
		cin >> hourlyRate;
	}

	void calculatePaycheck()
	{
		paycheck = (40 * hourlyRate) + (((hoursWorked - 40) * hourlyRate) * 1.5);
	}

	void printResult()
	{
		cout << "The hours you worked for this week: " << hoursWorked << endl;
		cout << "Your hourly rate: " << hourlyRate << endl;
		cout << "Your overtime for this week: " << (hoursWorked - 40) << endl;
		cout << "This is your paycheck for this week: " << paycheck;
	}
};





int main()
{
	paycheckCalculator* myCheck = nullptr;
	myCheck = new paycheckCalculator;
	myCheck->getInfo();
	myCheck->calculatePaycheck();
	myCheck->printResult();
	delete myCheck;



	return 0;
}