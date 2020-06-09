// Account.cpp
// Implementation of base class Account's member functions
 
#include <iostream>
#include <string>

#include "Account.h"

using namespace std;


Account::Account(double b = 0.0)
  : balance_(b)
{
}

/*
void Account::depositMoney(double amount)
{
	balance_ = balance_ + amount;
}
*/


void Account::operator+=(double amount)
{
	balance_ = balance_ + amount;
}


/*
void Account::withdrawMoney(double amount)
{
	balance_ = balance_ - amount;
}
*/


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

