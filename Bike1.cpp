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
	BikeSaddle(std::string, std::string);
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
	Bike(BikeType, int);
	void setType(BikeType);
	BikeType getType();
	void setId(int);
	int getId();
private:
	BikeType type_;
	int id_;
};

Bike::Bike()
{

}
Bike::Bike(BikeType type, int id):type_(type),id_(id)
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
	return;
}



int main()
{
	Bike a(kUnknown,0);
	display(a);
	Bike b(kCruiser, 4711);
	display(b);
	return 0;
}















