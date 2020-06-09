#pragma once
#include"Account.h"
class Checking:public Account
{
	public:
		Checking(double am);
		void calculateDailyInterest();
		void operator+=(double amount);
		void operator-=(double amount);
		void resetTransactions();
	private:
		float rate_=0.01;
		double min_balance_=1000.0;
		int transaction_ = 0;
		void checkForFee();
};

