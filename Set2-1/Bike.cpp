#include "Bike.h"
using namespace std;
Bike::Bike()
{

}
Bike::Bike(BikeType type, int id, string saddle_color, string saddli_maker) :type_(type), id_(id),
saddle_(saddle_color, saddli_maker)
{

}
void Bike::setType(BikeType type)
{
	type_ = type;
}
BikeType Bike::getType()
{
	return type_;
}
void Bike::setId(int id)
{
	id_ = id;
}
int Bike::getId()
{
	return id_;
}
void Bike::setSaddle(string color, string manufacturer)
{
	saddle_.setColor(color);
	saddle_.setManufacturer(manufacturer);
}
BikeSaddle Bike::getSaddle()
{
	return saddle_;
}