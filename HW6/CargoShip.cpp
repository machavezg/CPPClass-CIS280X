#include <iostream>
#include "CargoShip.h"

using namespace std;

// constructor
CargoShip::CargoShip( const string &n, int t )
: Ship( n )
{
    setTonnage( t );
} // end CommissionEmployee constructor

// set base salary
void CargoShip::setTonnage( int t )
{
    tonnage = t;
} // end function setBaseSalary

// return base salary
int CargoShip::getTonnage() const
{
   return tonnage;
} // end function getBaseSalary

// print CommissionEmployee object
void CargoShip::print() const
{
    cout << "Name: " << name << endl;
    cout << "Cargo Capacity: " << tonnage << endl;
    cout << "--------------------------" << endl;
} // end function print
CargoShip::~CargoShip() {
}

