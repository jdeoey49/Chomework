#include "RentalBike.h"
RentalBike::RentalBike()
{
	price_ = 0;
	bike_ = Bike();
	date_ = nullptr;
}
RentalBike::RentalBike(Bike& bike_ref, Date* hire_date_ptr, float price) :
	bike_(bike_ref),date_(hire_date_ptr),price_(price)
{

}
float RentalBike::getPrice() const
{
	return price_;
}
Date* RentalBike::getDate() const
{
	return date_;
}
Bike RentalBike::getBike() const
{
	return bike_;
}