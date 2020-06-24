#include<iostream>
#include<string>
#include "HourlyWorker.h"
using namespace std;
HourlyWorker::HourlyWorker(std::string first_ref, std::string last_ref, std::string ssn_ref,
	double wage , int hour ):Employee(first_ref,last_ref,ssn_ref),wage_(wage),hour_(hour)
{}
double HourlyWorker::earnings() const
{
	int h=getHour();
	int extra=0;
	if (h <= 0)
	{
		return 0;
	}
	else if (h <= 40)
	{
		return h * getWage();
	}
	else
	{
		extra = h - 40;
		return h * getWage() + extra * getWage()*1.5;
	}
}
void HourlyWorker::print() const
{
	cout << "HourlyWorker employee";
	Employee::print();
	cout << "\nwage:" << getWage() << endl;
	cout << "hour:" << getHour();
}