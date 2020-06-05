#include "instrument.h"
#include <iostream>

using namespace std;

Instrument::Instrument(std::string modelName, int soundQuality) : modelName_(modelName)
{
	setSoundQuality(soundQuality);
}

void Instrument::setSoundQuality(int input)
{
	//limiting range from 1-100
	if (input >= 1 || input <= 100)
		soundQuality_ = input;
	else
		soundQuality_ = 10;
}

std::ostream& operator<<(std::ostream& os, Instrument& input)
{
	os << "Model: " << input.modelName_ << "\nSound quality: " << input.soundQuality_ << endl;
	return os;
}
