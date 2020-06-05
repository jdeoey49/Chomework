#include "instrument.h"
#include <iostream>

using namespace std;

Instrument::Instrument(std::string model_name, int sound_quality) : model_name_(model_name)
{
	setSoundQuality(sound_quality);
}

void Instrument::play() const
{
	cout << "\nPlaying " << model_name_ << endl;
}

void Instrument::setSoundQuality(int input)
{
	//limiting range from 1-100
	if (input >= 1 || input <= 100)
		sound_quality_ = input;
	else
		sound_quality_ = 10;
}

std::ostream& operator<<(std::ostream& os, Instrument& input)
{
	os << "\nModel: " << input.model_name_ << "\nSound quality: " << input.sound_quality_ << endl;
	return os;
}
