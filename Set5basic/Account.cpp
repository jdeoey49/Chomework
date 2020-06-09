#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(double balance)
{
	setBalance(balance);
}
void Account::depositMoney(double amount)
{
	balance_ = balance_ + amount;
}
void Account::withdrawMoney(double amount)
{
	if(amount < balance_)
	{
		balance_ = balance_ - amount;
	}
	else
	{
		cout << "balance insufficient in account" << endl;
		exit(1);
	}
	
}
double Account::getBalance() const
{
	return balance_;
}
void Account::setBalance(double balance)
{
	balance_ = balance;
}