#pragma once
#include<string>
class Date
{
	public:
		Date();
		Date(int,int,int);
		std::string toString() const;
	private:
		int day_;
		int month_;
		int year_;
};

