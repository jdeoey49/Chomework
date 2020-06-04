#pragma once
#include<iostream>
#include<string>
class Fraction
{
	friend std::ostream& operator<<(std::ostream& oref, const Fraction& fref);
	friend Fraction operator+(const Fraction&, const Fraction&);
	friend Fraction operator-(const Fraction&, const Fraction&);
	friend Fraction operator*(const Fraction&, const Fraction&);
	friend Fraction operator/(const Fraction&, const Fraction&);
public:
	Fraction() :num_(1), den_(1){}
	Fraction(int,int);
	~Fraction();
	Fraction(int n) :num_(n), den_(1) {}
private:
	int num_;
	int den_;
	void normalize();
};

