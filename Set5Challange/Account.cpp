#include<iostream>
#include"Account.h"
using namespace std;
Account::Account(double balance)
{
	setBalance(balance);
}
void Account::operator+=(double amount)
{
	balance_ = balance_ + amount;
}
void Account::operator-=(double amount)
{
		balance_ = balance_ - amount;
}
double Account::getBalance() const
{
	return balance_;
}
void Account::setBalance(double balance)
{
	balance_ = balance;
}