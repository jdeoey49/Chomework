#include<iostream>
#include "Savings.h"
using namespace std;
Savings::Savings(double balance):Account(balance)
{

}
void Savings::calculateDailyInterest()
{
	double oldbalance = Account::getBalance();
	double newbalance;
	newbalance = oldbalance + oldbalance * rate_ /kDaysPerMonth/kMonthsPerYear;
	Account::setBalance(newbalance);
}
void Savings::withdrawMoney(double amount)
{
	if ((getBalance() - amount) > 0.0)
		Account::withdrawMoney(amount);
	else {
		cout << "Insufficient funds available in saving account \n";
	}
}