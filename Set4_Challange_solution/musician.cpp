#include "musician.h"
#include <iostream>

using namespace std;


/*
Musician::Musician(std::string name, int expYears, Instrument& instrument) : ref_instrument_(instrument)
{
	name_ = name;
	years_of_experience_ = expYears;
}
*/

Musician::Musician(std::string name) : name_(name)
{
}

void Musician::addInstrument(const Instrument* instr_ptr, int years_of_experience)
{
	if (instr_ptr)
		instrument_list_.push_back(instr_ptr);
	else {
		cerr << "nullptr encountered!";
		exit(1); // we could also throw an exception
	}
	if (years_of_experience >= 0)
		experience_list_.push_back(years_of_experience);
	else {
		cerr << "negative number of years of experience!";
		exit(1); // we could also throw an exception
	}
}

/*
Instrument& Musician::accessInstrument() const
{
	return ref_instrument_;
}
*/


const Instrument* Musician::accessInstrument(int idx) const
{
	if ( idx < instrument_list_.size() )
		return instrument_list_[idx];
	else {
		cerr << "index out of range!";
		exit(1);
	}
}


std::ostream& operator<<(std::ostream& os, Musician& input)
{
	/*
	os << "The musician " << input.name_ << " has " << input.years_of_experience_ << " years of experience. He/she can play the instrument: " << input.accessInstrument().getName() << endl;
	os << endl;
	*/
	os << "\nThe musician's name is " << input.name_ << endl;
	if (input.instrument_list_.size() > 0) {
		os << "He can play the following: ";
		for (int i = 0; i < input.instrument_list_.size(); ++i)
			os << "\nInstrument: " << input.instrument_list_[i]->getName()
			   << "\tYears of experience: " << input.experience_list_[i];
		os << endl;
	}
	else {
		os << "He cannot play any instruments yet." << endl;
	}

	return os;
}
