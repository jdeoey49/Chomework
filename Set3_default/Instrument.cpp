#include "Instrument.h"
Instrument::Instrument(std::string model_name, int sound_quality):
	mode_name_(model_name)
{
	setSoundQuality(sound_quality);
}
std::string Instrument::getName() const
{
	return mode_name_;
}
void Instrument::play()
{

}
void Instrument::setSoundQuality(int input)
{
	if (sound_quality_ < 1 || sound_quality_>100)
	{
		sound_quality_ = 10;
	}
	else
	{
		sound_quality_ = input;
	}
}
std::ostream& operator<<(std::ostream& out, Instrument& inst_ref)
{
	out << "Model:" << inst_ref.mode_name_ <<
		"\nSound Quality:" << inst_ref.sound_quality_;
	return out;
}