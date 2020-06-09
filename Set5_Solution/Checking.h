// Checking.h
// Derived class Checking. 

#ifndef CHECKING_H
#define CHECKING_H


#include <iostream>
#include <string>

#include "Account.h"

class Checking : public Account
{
public:
  explicit Checking(double amount = 0.0, double rate = 0.01, double min_balance = 1000.0, int free_transations = 3,
  	  double transation_fee = 1.0);
  //void depositMoney(double amount);
  void operator+=(double amount); 
  //void withdrawMoney(double amount);
  void operator-=(double amount);
  void calculateDailyInterest();
  void resetTransactions();

private:	
	const double rate_;
	const double min_balance_;
	const int free_transactions_;
	const double transaction_fee_;	
	int transactions_;
	void checkForFee(); // utility function
};

#endif


