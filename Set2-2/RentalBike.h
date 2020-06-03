#pragma once
#include"Bike.h"
#include"Date.h"
class RentalBike
{	
	public:
		RentalBike();
		RentalBike(Bike&,Date*,float);
		float getPrice() const;
		Date* getDate() const;
		Bike getBike() const;
	private:
		float price_;
		Date* date_;
		Bike  bike_;
};

