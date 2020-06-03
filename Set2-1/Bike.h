#pragma once
#include<string>
#include"BikeSaddle.h"
enum BikeType
{
	kUnknown, kRoadBike, kTouringBike,
	kMountainBike, kCruiser, kCityBike,
	kBmxBike, kFoldingBike, kTandem, kTricycle
};

class Bike
{
public:
	Bike();
	Bike(BikeType, int, std::string, std::string);
	void setType(BikeType);
	BikeType getType();
	void setId(int);
	int getId();
	void setSaddle(std::string, std::string);
	BikeSaddle getSaddle();
private:
	BikeType type_;
	BikeSaddle saddle_;
	int id_;
};

