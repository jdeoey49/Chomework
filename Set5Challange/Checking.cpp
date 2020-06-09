#include "Checking.h"
#include<iostream>
using namespace std;
Checking::Checking(double am):Account(am)
{

}
void Checking::calculateDailyInterest()
{
	double surplus = getBalance() - min_balance_;
	if (surplus > 0)
	{
		Account::depositMoney(surplus * rate_ / kDaysPerMonth / kMonthsPerYear);
	}
}
void Checking::withdrawMoney(double amount)
{
	if ((getBalance() - amount) > 0.0)
	{
		Account::withdrawMoney(amount);
		transaction_++;
		checkForFee();
	}
	else 
	{
		cout << "Insufficient funds available in checking account \n";
	}
}
void Checking::resetTransactions()
{
	transaction_ = 0;
}
void Checking::checkForFee()
{
	if (transaction_ > 3)
	{
		Account::withdrawMoney(1.0);
	}
	else
		return;
}
void Checking::depositMoney(double amount)
{
	Account::depositMoney(amount);
	transaction_++;
	checkForFee();
}



