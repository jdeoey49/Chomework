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
   explicit Account(double balance);
   void depositMoney(double amount);
   void withdrawMoney(double amount);
   double getBalance() const;
   void setBalance(double balance);
private:
   double balance_;
};

#endif

