#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <string>
#include <iostream>

class Instrument {
public:
	friend std::ostream& operator<<(std::ostream& os, Instrument& input);

	explicit Instrument(std::string modelName = "", int soundQuality = 10);
	std::string getName() const { return model_name_; }
	void play() const;
private:
	std::string model_name_;
	int sound_quality_;
	void setSoundQuality(int);
};

#endif // !INSTRUMENT_H
