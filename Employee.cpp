// Employee.cpp
// Abstract-base-class Employee member-function definitions.
// Note: No definition is given for pure virtual function earnings() .
#include <iostream>
#include "Employee.h" // Employee class definition
using namespace std;

// constructor
Employee::Employee( const string& first_ref, const string& last_ref,
   const string& ssn_ref )
   : first_name_( first_ref ), last_name_( last_ref ), ssn_( ssn_ref )
{
   // empty body 
} // end Employee constructor

// set first name
void Employee::setFirstName( const string& first_ref ) 
{ 
   first_name_ = first_ref;  
} // end function setFirstName

// return first name
string Employee::getFirstName() const 
{ 
   return first_name_;  
} // end function getFirstName

// set last name
void Employee::setLastName( const string& last_ref )
{
   last_name_ = last_ref;   
} // end function setLastName

// return last name
string Employee::getLastName() const
{
   return last_name_;   
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( const string& ssn_ref )
{
   ssn_ = ssn_ref; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
   return ssn_;   
} // end function getSocialSecurityNumber

// print Employee's information (virtual, but not pure virtual)
void Employee::print() const
{ 
   cout << getFirstName() << ' ' << getLastName() 
      << "\nsocial security number: " << getSocialSecurityNumber(); 
} // end function print


