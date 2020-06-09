#pragma once
#include"Account.h"
class Savings:public Account
{
	public:
		Savings(double balance);
		void calculateDailyInterest();
		void withdrawMoney(double amount);
	private:
		double rate_=0.02;
};

