// Savings.cpp
// Implementation of derived class Savings's member functions

#include <iostream>
#include <string>

#include "Savings.h"

using namespace std;


Savings::Savings(double amount, double r)
   : Account(amount), rate_(r)
{    
}



/*
void Savings::withdrawMoney(double amount)
{
	if ( (getBalance() - amount) > 0.0 )
		Account::withdrawMoney(amount);
	else {
		cout << "Insufficient funds available in checking account \n";
	}
}
*/


void Savings::operator-=(double amount)
{
	if ((getBalance() - amount) > 0.0)
		Account::operator-=(amount);
	else {
		cout << "Insufficient funds available in checking account \n";
	}
}


void Savings::calculateDailyInterest()
{
   //depositMoney(getBalance() * rate_ / kDaysPerMonth / kMonthsPerYear);
   operator+=(getBalance() * rate_ / kDaysPerMonth / kMonthsPerYear);

}



