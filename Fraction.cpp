#include<iostream>
#include "Fraction.h"
using namespace std;
Fraction::Fraction(int num,int den):num_(num),den_(den)
{
	//cout << "defalut constructor at work" << endl;
	if (den_ == 0)
		exit(1);
}
Fraction::~Fraction()
{
	//cout << "destructor at work" << endl;
}
void Fraction::normalize()
{
	if (num_ == 0) { den_ = 1; return; }

	int sign = 1;
	if (num_ < 0) { sign = -1; num_ = -num_; }
	if (den_ < 0) { sign = -sign; den_ = -den_; }

	long gcd = static_cast<long>(num_); // greatest common divisor
	long value = static_cast<long>(den_);
	while (value != gcd) // stop when the GCD is found
	{
		if (gcd > value)
			gcd = gcd - value; // subtract smaller number from the greater
		else
			value = value - gcd;
	}

	num_ = sign * (num_ / gcd);
	den_ = den_ / gcd; // denominator is always positive
}
ostream& operator<<(ostream& oref, const Fraction& fref)
{
	if (fref.den_ == 1)
	{
		oref << fref.num_;
	}
	else
	{
		oref << fref.num_ << "/" << fref.den_;
	}
	return oref;
}
Fraction operator+(const Fraction& number1,  const Fraction& number2)
{
	Fraction ans;
	ans.den_ = number1.den_*number2.den_;
	ans.num_ = number1.num_*number2.den_ + number1.den_*number2.num_;
	ans.normalize();
	return ans;
}
Fraction operator-(const Fraction& number1, const Fraction& number2)
{
	Fraction ans;
	ans.den_ = number1.den_*number2.den_;
	ans.num_ = number1.num_*number2.den_ - number1.den_*number2.num_;
	ans.normalize();
	return ans;
}
Fraction operator*(const Fraction& number1, const Fraction& number2)
{
	Fraction ans;
	ans.den_ = number1.den_*number2.den_;
	ans.num_ = number1.num_*number2.num_;
	ans.normalize();
	return ans;
}
Fraction operator/(const Fraction& number1, const Fraction& number2)
{
	Fraction ans;
	ans.den_ = number1.den_*number2.num_;
	ans.num_ = number1.num_*number2.den_;
	ans.normalize();
	return ans;
}