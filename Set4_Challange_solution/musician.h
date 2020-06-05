#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>
#include <vector>
#include "instrument.h"

class Musician{
public:
	friend std::ostream& operator<<(std::ostream& os, Musician& input);
	//Musician(std::string name, int expYears, Instrument& instrument); // not suitable for challege problem
	explicit Musician(std::string name);
	void addInstrument(const Instrument* instr_ptr, int years_of_experience);
	const Instrument* accessInstrument(int idx) const;
private:
	std::string name_;
	// int years_of_experience_;
	std::vector<int> experience_list_; // we need a list if we have more than one instrument

	// Instrument& ref_instrument_; 
	// References must be initialized in the constructor. They cannot be used for vector,
	// because we do not know how many references there will be. So we cannot initialize them.
	// In such a case, we have to use a vector of pointers to Instruments.
	std::vector<const Instrument*> instrument_list_;
	// Here pointers to const objects of type Instrument were used. 
	// Pointers like this cannot be used to change the content of the objects being pointed to.
	// This pointer to a const object has consequences for the other related functions:
	//  - void addInstrument(CONST Instrument* instr_ptr, int years_of_experience);
	//  - CONST Instrument* accessInstrument(int idx) const;
	// They also need to be CONST correct. If you do not use a vector of pointers to CONST objects,
	// then you do not need the CONST declarations (higlighted using capital letters). 

	// Note: Think about how you could combine the instruments and the years of the 
	// musician's experience into a joint data structure and then having only one vector 
	// of this data structure.
};

#endif // !MUSICIAN_H
