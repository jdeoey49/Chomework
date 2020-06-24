// BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from CommissionEmployee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include "CommissionEmployee.h" // CommissionEmployee class definition

class BasePlusCommissionEmployee : public CommissionEmployee 
{
public:
   BasePlusCommissionEmployee( const std::string& first_ref, const std::string& last_ref,
      const std::string& ssn_ref, double sales = 0.0, double rate = 0.0, double salary= 0.0 );
   virtual ~BasePlusCommissionEmployee() { } // virtual destructor

   void setBaseSalary( double ); // set base salary
   double getBaseSalary() const; // return base salary

   // keyword virtual signals intent to override
   virtual double earnings() const override; // calculate earnings
   virtual void print() const override; // print object
private:
   double base_salary_; // base salary per week
}; // end class BasePlusCommissionEmployee

#endif // BASEPLUS_H


