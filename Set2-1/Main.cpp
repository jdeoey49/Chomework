#include<iostream>
#include"Bike.h"
using namespace std;
void display(Bike);

int main()
{
	Bike a(kUnknown, 0, "", "");
	display(a);
	Bike b(kCruiser, 4711, "black", "Airo");
	display(b);
	return 0;
}

void display(Bike bike)
{
	cout << "\nBike properties: " << endl;
	cout << "Bike type: ";
	//your code here
	BikeType i = bike.getType();
	switch (i)
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
	cout << "Bike id: " << bike.getId() << endl;
	cout << "Saddle Color:" << bike.getSaddle().getColor() << endl;
	cout << "Saddle Manufacturer:" << bike.getSaddle().getManufacturer() << endl;
	return;
}