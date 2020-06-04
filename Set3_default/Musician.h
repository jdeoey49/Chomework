#pragma once
#include<iostream>
#include<string>
#include"Instrument.h"
class Musician
{
	friend std::ostream& operator<<(std::ostream& out, Musician& m_ref);
	public:
		Musician(std::string, int, Instrument&);
		Instrument& accessInstrument();
	private:
		std::string name_;
		int years_of_experience_;
		Instrument& ref_instrument_;
};

