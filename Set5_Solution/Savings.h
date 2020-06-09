// Savings.h
// Derived classes Savings 

#ifndef SAVINGS_H
#define SAVINGS_H

#include <iostream>
#include <string>

#include "Account.h"

class Savings : public Account
{
public:
  explicit Savings(double amount = 0.0, double r = 0.02);
  //void withdrawMoney(double b);
  void operator-=(double amount);
  void calculateDailyInterest();
private:
	const double rate_;
};



#endif

