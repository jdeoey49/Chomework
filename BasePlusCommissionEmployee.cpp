// BasePlusCommissionEmployee.cpp
// BasePlusCommissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "BasePlusCommissionEmployee.h"
using namespace std;

// constructor 
BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string& first_ref, const string& last_ref, const string& ssn_ref, 
   double sales, double rate, double salary )
   : CommissionEmployee( first_ref, last_ref, ssn_ref, sales, rate )  
{
   setBaseSalary( salary ); // validate and store base salary
} // end BasePlusCommissionEmployee constructor

// set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{ 
   if ( salary >= 0.0 )                                        
      base_salary_ = salary;                                     
   else                                                        
      throw invalid_argument( "Salary must be >= 0.0" );       
} // end function setBaseSalary

// return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{ 
    return base_salary_; 
} // end function getBaseSalary

// calculate earnings;
// override virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings() const
{ 
    return getBaseSalary() + CommissionEmployee::earnings(); 
} // end function earnings

// print BasePlusCommissionEmployee's information 
void BasePlusCommissionEmployee::print() const
{
   cout << "base-salaried ";
   CommissionEmployee::print(); // code reuse
   cout << "; base salary: " << getBaseSalary();
} // end function print


