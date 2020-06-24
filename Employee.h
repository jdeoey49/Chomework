// Employee.h
// Employee abstract base class.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ standard string class

class Employee 
{
public:
   Employee( const std::string &, const std::string &, 
      const std::string & );
   virtual ~Employee() { } // virtual destructor

   void setFirstName( const std::string & ); // set first name
   std::string getFirstName() const; // return first name

   void setLastName( const std::string & ); // set last name
   std::string getLastName() const; // return last name

   void setSocialSecurityNumber( const std::string & ); // set SSN
   std::string getSocialSecurityNumber() const; // return SSN

   // pure virtual function makes Employee abstract base class
   virtual double earnings() const = 0; // pure virtual
   virtual void print() const; // virtual
private:
   std::string first_name_;
   std::string last_name_;
   std::string ssn_;
}; // end class Employee

#endif // EMPLOYEE_H


