#pragma once
#include<string>
class BikeSaddle
{
public:
	BikeSaddle(std::string = "", std::string = "");
	void setColor(std::string);
	std::string getColor();
	void setManufacturer(std::string);
	std::string getManufacturer();
private:
	std::string color_;
	std::string manufacturer_;
};

