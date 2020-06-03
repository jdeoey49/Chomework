#include<iostream>
#include<string>
using namespace std;

enum BikeType
{
	kUnknown, kRoadBike, kTouringBike,
	kMountainBike, kCruiser, kCityBike,
	kBmxBike, kFoldingBike, kTandem, kTricycle
};

class BikeSaddle
{
public:
	BikeSaddle(std::string="", std::string="");
	void setColor(std::string);
	std::string getColor();
	void setManufacturer(std::string);
	std::string getManufacturer();
private:
	std::string color_;
	std::string manufacturer_;
};


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


class Bike
{
	
public:
	Bike();
	Bike(BikeType, int,string,string);
	void setType(BikeType);
	BikeType getType();
	void setId(int);
	int getId();
	void setSaddle(string,string);
	BikeSaddle getSaddle();
private:
	BikeType type_;
	BikeSaddle saddle_;
	int id_;
};

Bike::Bike()
{

}
Bike::Bike(BikeType type, int id,string saddle_color,string saddli_maker):type_(type),id_(id),
saddle_(saddle_color,saddli_maker)
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

void display(Bike bike)
{
	cout << "\nBike properties: " << endl;
	cout << "Bike type: ";
	//your code here
	BikeType i=bike.getType();
	switch(i)
	{
	case kUnknown: cout << "unknown type" << endl; break;
	case kRoadBike: cout << "road bike" << endl; break;
	case kTouringBike: cout << "touring bike" << endl; break;
	case kMountainBike: cout << "mountain bike" << endl; break;
	case kCruiser: cout << "cruiser bike" << endl; break;
	case kCityBike: cout << "city bike" << endl; break;
	case kBmxBike: cout << "BMX bike" << endl; break;
	case kFoldingBike: cout << "folding bike" << endl; break;
	case kTandem: cout << "folding bike" << endl; break;
	case kTricycle: cout << "tricycle" << endl; break;
 default:
	 cout << "no valid bike type!" << endl;
	}
	cout << "Bike id: "<<bike.getId() << endl;
	cout << "Saddle Color:" << bike.getSaddle().getColor() << endl;
	cout << "Saddle Manufacturer:" << bike.getSaddle().getManufacturer() << endl;
	return;
}



int main()
{
	Bike a(kUnknown,0,"","");
	display(a);
	Bike b(kCruiser,4711,"black","Airo");
	display(b);
	return 0;
}















