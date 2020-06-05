#ifndef INSTRUMENT_H
#define INSTRUMENT_H

#include <string>
#include <iostream>

class Instrument {
public:
	friend std::ostream& operator<<(std::ostream& os, Instrument& input);

	Instrument(std::string modelName = "", int soundQuality = 10);
	std::string getName() const { return modelName_; }
private:
	std::string modelName_;
	int soundQuality_;
	void setSoundQuality(int);
};

#endif // !INSTRUMENT_H
