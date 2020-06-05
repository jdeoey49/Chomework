#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>
//#include <vector>
#include "instrument.h"

class Musician{
public:
	friend std::ostream& operator<<(std::ostream& os, Musician& input);
	Musician(std::string name, int expYears, Instrument& instrument);
	Instrument& accessInstrument() const;
private:
	std::string name_;
	int years_of_experience_;
	Instrument& ref_instrument_;
};

#endif // !MUSICIAN_H
