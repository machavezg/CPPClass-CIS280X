//Employee.cpp

#include <iostream>
#include <stdexcept>
#include "employee.h"
using namespace std;

//Constructor
employee::employee(const string &first, const string &last, double salary)
{
  firstName = first;
  lastName = last;
  setMonthlySalary( salary );
}

//Set first name
void employee::setFirstName( const string &first)
{
  firstName = first;
}

//Return first name
string employee::getFirstName() const
{
  return firstName;
}

//Set last name
void employee::setLastName( const string &last)
{
  lastName = last;
}

//Return last name
string employee::getLastName() const
{
  return lastName;
}

//Set monthly salary
void employee::setMonthlySalary( double salary)
{
  if( salary >= 0.0 ) //Validate that salary is positive
    monthlySalary = salary;
  else //Set salary to 0.0 if it's negative
    monthlySalary = 0.0;
}

//Return monthly salary
double employee::getMonthlySalary() const
{
  return monthlySalary;
}

//Print employee object
void employee::displayEmployee() cosnt
{
  cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nMonthly Salary: " << monthlySalary;
}
