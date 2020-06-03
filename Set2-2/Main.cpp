#include<iostream>
#include<iomanip>
#include"Bike.h"
#include"RentalBike.h"
using namespace std;
void display(Bike);
void display(RentalBike);
int main()
{
	/*
	Bike a(kUnknown, 0, "", "");
	display(a);
	Bike b(kCruiser, 4711, "black", "Airo");
	display(b);
	return 0;
	*/
	Date* your_hire_date_ptr = new Date(6, 4, 2019);
	//cout << "Bike Hire Date: " << your_hire_date_ptr->toString() << endl;

	Bike my_bike;
	display(my_bike);
	Bike bike_1(kCruiser, 4711, "black", "Airo");
	//display(bike_1);
	RentalBike rental_bike_1(bike_1, your_hire_date_ptr, 10.5);
	display(rental_bike_1);


	Bike bike_2(kMountainBike, 1234, "silver", "Aero");
	RentalBike rental_bike_2(bike_2, your_hire_date_ptr, 5);
	display(rental_bike_2);

	delete your_hire_date_ptr;
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

void display(RentalBike rental_bike)
{
	cout << "\nRental Bike properties: " << endl;
	cout << "Bike type: ";
	BikeType i = rental_bike.getBike().getType();
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
			cout << "Bike id: " << rental_bike.getBike().getId() << endl;
			cout << "Saddle color: " << rental_bike.getBike().getSaddle().getColor() << endl;
			cout << "Saddle manufacturer: " << rental_bike.getBike().getSaddle().getManufacturer()<< endl;
			cout << "Hire Date: " << rental_bike.getDate()->toString() << endl;
			cout << "Rental Price: " << fixed<<setprecision(2)
				<<rental_bike.getPrice()<<" Euro"<< endl;
			return;
}