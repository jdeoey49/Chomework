// Account.h
// Base class Account 

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

const int kDaysPerMonth = 30;
const int kMonthsPerYear = 12;


class Account
{
public:
   explicit Account(double b);
   //void depositMoney(double amount);
   void operator+=(double amount);
   //void withdrawMoney(double amount);
   void operator-=(double amount);
   double getBalance() const;
   void setBalance(double balance);
private:
   double balance_;
};

#endif

/*
   Note:
   Variables declared const, and whose value is fixed for the duration of the program, are named with a 
   leading "k" followed by mixed case.  Underscores can be used as separators in the rare cases where 
   capitalization cannot be used for separation. 
   https://google.github.io/styleguide/cppguide.html#Constant_Names
*/

