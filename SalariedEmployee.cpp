// SalariedEmployee.cpp
// SalariedEmployee class member-function definitions.
#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h" // SalariedEmployee class definition
using namespace std;

// constructor 
SalariedEmployee::SalariedEmployee( const string& first_ref, 
   const string& last_ref, const string& ssn_ref, double salary )
   : Employee( first_ref, last_ref, ssn_ref )
{ 
   setWeeklySalary( salary ); 
} // end SalariedEmployee constructor

// set salary
void SalariedEmployee::setWeeklySalary( double salary )
{ 
   if ( salary >= 0.0 )
      weekly_salary_ = salary;
   else
      throw invalid_argument( "Weekly salary must be >= 0.0" );
} // end function setWeeklySalary

// return salary
double SalariedEmployee::getWeeklySalary() const
{
   return weekly_salary_;
} // end function getWeeklySalary

// calculate earnings; 
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const 
{ 
   return getWeeklySalary(); 
} // end function earnings

// print SalariedEmployee's information 
void SalariedEmployee::print() const
{
   cout << "salaried employee: ";
   Employee::print(); // reuse abstract base-class print function
   cout << "\nweekly salary: " << getWeeklySalary();
} // end function print


