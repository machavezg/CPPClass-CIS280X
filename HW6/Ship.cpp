#include <iostream>
#include "Ship.h"

using namespace std;

Ship::Ship()
{
    name = year = "";
}
// constructor
Ship::Ship( const string &n, const string &y )
{
    name = n;
    year = y;
} // end CommissionEmployee constructor

Ship::Ship( const string &n )
{
    name = n;
} // end CommissionEmployee constructor

// set first name
void Ship::setName( const string &n )
{
   name = n; // should validate
} // end function setFirstName

// return first name
string Ship::getName() const
{
   return name;
} // end function getFirstName

// set gross sales amount
void Ship::setYear( const string &y )
{
    year = y;
} // end function setGrossSales

// return gross sales amount
string Ship::getYear() const
{
   return year;
} // end function getGrossSales

// print CommissionEmployee object
void Ship::print() const
{
    cout << "--------------------------" << endl;
    cout << "Name: " << name << endl;
    cout << "Year built: " << year << endl;
    cout << "--------------------------" << endl;
} // end function print

Ship::~Ship() {
}
