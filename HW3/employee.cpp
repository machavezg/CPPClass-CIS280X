//Employee.cpp

#include <iostream>
#include <stdexcept>
#include "Employee.h"
using namespace std;

//Constructor
Employee::Employee(const string &first, const string &last, double salary)
{
  firstName = first;
  lastName = last;
  setMonthlySalary( salary );
}

//Set first name
void Employee::setFirstName( const string &first)
{
  firstName = first;
}

//Return first name
string Employee::getFirstName() const
{
  return firstName;
}

//Set last name
void Employee::setLastName( const string &last)
{
  lastName = last;
}

//Return last name
string Employee::getLastName() const
{
  return lastName;
}

//Set monthly salary
void Employee::setMonthlySalary( double salary)
{
  if( salary >= 0.0 ) //Validate that salary is positive
    monthlySalary = salary;
  else //Set salary to 0.0 if it's negative
    monthlySalary = 0.0;
}

//Return monthly salary
double Employee::getMonthlySalary() const
{
  return monthlySalary;
}

//Print employee object
void Employee::displayEmployee() cosnt
{
  cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nMonthly Salary: " << monthlySalary;
}
