#include<iostream>
#include "Musician.h"
using namespace std;
Musician::Musician(std::string name):
	name_(name)
{

}
void Musician::addInstrument(Instrument* inst_ptr_, int years_of_experience)
{
	if (inst_ptr_)
		instrument_list_.push_back(inst_ptr_);
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
const Instrument* Musician::accessInstrument(int idx)
{
	if (idx < instrument_list_.size())
		return instrument_list_[idx];
	else {
		cerr << "index out of range!";
		exit(1);
	}
}
std::ostream& operator<<(std::ostream& os, Musician& input)
{
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