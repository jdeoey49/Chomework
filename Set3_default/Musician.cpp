#include "Musician.h"
Musician::Musician(std::string name, int exp_years, Instrument& i_ref):
	name_(name), years_of_experience_(exp_years),ref_instrument_(i_ref)
{

}
Instrument& Musician::accessInstrument()
{
	return ref_instrument_;
}
std::ostream& operator<<(std::ostream& out, Musician& m_ref)
{
	out << "\nThe musician " << m_ref.name_ << " has " <<m_ref.years_of_experience_
		<<" years of experience."<< " He/She can play the instrument: " 
		<< m_ref.accessInstrument().getName();

	return out;
}