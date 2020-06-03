#include "Date.h"
#include<sstream>
using namespace std;
Date::Date()
{
	day_ = 0;
	month_ = 0;
	year_ = 0;
}
Date::Date(int dy, int mth, int yr):day_(dy),month_(mth),year_(yr)
{

}
string Date::toString() const
{
	ostringstream output;
	output << day_ << '.' << month_ << '.' << year_; 
	return output.str();
}