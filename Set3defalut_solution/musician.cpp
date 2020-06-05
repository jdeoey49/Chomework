#include "musician.h"
#include <iostream>

using namespace std;

Musician::Musician(std::string name, int expYears, Instrument& instrument) : ref_instrument_(instrument)
{
	name_ = name;
	years_of_experience_ = expYears;
}

Instrument& Musician::accessInstrument() const
{
	return ref_instrument_;
}

std::ostream& operator<<(std::ostream& os, Musician& input)
{
	os << "The musician " << input.name_ << " has " << input.years_of_experience_ << " years of experience. He/she can play the instrument: " << input.accessInstrument().getName() << endl;
	os << endl;
	return os;
}
