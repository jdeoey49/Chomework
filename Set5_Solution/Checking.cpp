// Checking.cpp
// Implementation of derived class Checking's member functions

#include <iostream>
#include <string>

#include "Checking.h"


Checking::Checking(double amount, double r, double m_b, int f_t, double t_f)
	: Account(amount), rate_(r), min_balance_(m_b), free_transactions_(f_t), transaction_fee_(t_f)
{
	transactions_ = 0;
}


void Checking::calculateDailyInterest()
{
   double surplus = getBalance() - min_balance_;
   if (surplus > 0)
   {
	  //Account::depositMoney(surplus * rate_ / kDaysPerMonth / kMonthsPerYear);
	  Account::operator+=(surplus * rate_ / kDaysPerMonth / kMonthsPerYear);
	   // we want to use the overloaded += operator of the base class, Account, because it does not count against
	   // limited number of transations, i.e., there is no fee checking there.
   }
}

void Checking::checkForFee()
{
   transactions_++;
   if (transactions_ > free_transactions_)
   { 
	  //Account::withdrawMoney(transaction_fee_);
	  Account::operator-=(transaction_fee_);
	  // we want to use the overloaded += operator of the base class, Account, because it does not count against
	  // limited number of transations, i.e., there is no fee checking there.
   }
}


void Checking::resetTransactions() 
{
   transactions_ = 0;
}



/*
void Checking::withdrawMoney(double amount)
{
   Account::withdrawMoney(amount);  
   checkForFee();
}
*/


void Checking::operator-=(double amount)
{
	Account::operator-=(amount);
	// we want to use the overloaded += operator of the base class, Account, because it does not count against
	// limited number of transations, i.e., there is no fee checking there.
	checkForFee();
}



/*
void Checking::depositMoney(double amount)
{
   Account::depositMoney(amount);  
   checkForFee();
}
*/


void Checking::operator+=(double amount)
{
	Account::operator+=(amount);
	checkForFee();
}


