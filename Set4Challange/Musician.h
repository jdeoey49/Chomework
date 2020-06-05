#pragma once
#include<iostream>
#include<string>
#include<vector>
#include"Instrument.h"
class Musician
{
	friend std::ostream& operator<<(std::ostream& os, Musician& input);
	public:
		Musician(std::string);
		void addInstrument(Instrument* inst_ptr_, int years_of_experience);
		const Instrument* accessInstrument(int idx);
	private:
		std::string name_;


		std::vector <int> experience_list_;


		// Instrument& ref_instrument_; 
		// References must be initialized in the constructor. They cannot be used for vector,
		// because we do not know how many references there will be. So we cannot initialize them.
		// In such a case, we have to use a vector of pointers to Instruments.


		std::vector <const Instrument*> instrument_list_;


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

