#include "BikeSaddle.h"
using namespace std;
BikeSaddle::BikeSaddle(string color, string name) :color_(color), manufacturer_(name)
{
}
void BikeSaddle::setColor(string color)
{
	color_ = color;
}
std::string BikeSaddle::getColor()
{
	return color_;
}
void BikeSaddle::setManufacturer(string name)
{
	manufacturer_ = name;
}
std::string BikeSaddle::getManufacturer()
{
	return manufacturer_;
}