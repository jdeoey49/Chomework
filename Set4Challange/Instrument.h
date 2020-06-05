#pragma once
#include<iostream>
#include<string>
class Instrument
{
	friend std::ostream& operator<<(std::ostream& out, Instrument& inst_ref);
public:
	Instrument(std::string = "", int = 10);
	std::string getName() const;
	void play() const;
private:
	std::string mode_name_;
	int sound_quality_;
	void setSoundQuality(int);
};

