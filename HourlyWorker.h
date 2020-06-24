#pragma once
#include<string>
#include"Employee.h"
class HourlyWorker:public Employee
{
public:
	HourlyWorker(std::string first_ref, std::string last_ref, std::string ssn_ref,
		double wage = 0.0, int hour = 0);
	~HourlyWorker(){}
	virtual double earnings() const override;
	virtual void print() const override;
	void setWage(double wage) { wage_ = wage; }
	double getWage() const { return wage_; }
	void setHour(int hour) { hour_ = hour; }
	int	getHour() const { return hour_; }
private:
	double wage_;
	int hour_;
};

