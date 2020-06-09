// Driver.cpp
// Driver program for base class Account and 
// derived classes Savings and Checking. 

#include <iostream>
#include <string>
#include <iomanip>

#include "Checking.h"
#include "Savings.h"

using namespace std;

/*
   This code implements the challenge problems.
*/


int main()
{
   Checking c = Checking(1000.0);
   Savings s = Savings(1000.0);
   for (int i = 1; i <= kDaysPerMonth; i++)
   {
      //c.depositMoney(i * 5.0);
	  c += i * 5.0;
      //c.withdrawMoney(i * 2.0);
	  c -= i*2.0;
      //s.depositMoney(i * 5.0);
	  s += i * 5.0;
      //s.withdrawMoney(i * 2.0);
	  s -= i*2.0;
      c.calculateDailyInterest();
      s.calculateDailyInterest();
      if (i % 10 == 0)
      {
         cout << "day " << i << endl;
		 cout << fixed << setprecision(2);
		 cout << "Checking balance: " << c.getBalance() << endl;
         cout << "Savings balance: " << s.getBalance() << endl;
      }
   }
   c.resetTransactions();
   //c.withdrawMoney(100);
   c -= 100.0;
   cout << fixed << setprecision(2) 
	    << "Free withdrawal from checking account, that's nice: " 
        << c.getBalance() << endl;
   return 0;
}



