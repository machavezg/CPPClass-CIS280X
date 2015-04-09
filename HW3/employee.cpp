//Employee.cpp

#include <iostream>
#include <stdexcept>
#include "emplouee.h"
using namespace std;

employee::employee(const string &first, const string &last, double salary)
{
  firstName = first;
  lastName = last;
  setMonthlySalary( salary );
}

void employee::setFirstName( const string &first)
{
  firstName = first;
}

string employee::getFirstName() const
{
  return firstName;
}

void employee::setLastName( const string &last)
{
  lastName = last;
}

string employee::getLastName() const
{
  return lastName;
}

void employee::setMonthlySalary( double salary)
{
  if( salary >= 0.0 )
    monthlySalary = salary;
  else
    monthlySalary = 0.0;
}

double employee::getMonthlySalary() const
{
  return monthlySalary;
}

void employee::displayEmployee() cosnt
{
  cout << "First Name: " << firstName << "\nLast Name: " << lastName << "\nMonthly Salary: " << monthlySalary;
}
