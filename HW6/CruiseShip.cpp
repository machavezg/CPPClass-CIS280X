#include <iostream>
#include "CruiseShip.h"

using namespace std;

// constructor
CruiseShip::CruiseShip( const string &n, int p )
: Ship( n )
{
    setPassengers( p );
} // end CommissionEmployee constructor

// set base salary
void CruiseShip::setPassengers( int p )
{
    passengers = p;
} // end function setBaseSalary

// return base salary
int CruiseShip::getPassengers() const
{
   return passengers;
} // end function getBaseSalary

// print CommissionEmployee object
void CruiseShip::print() const
{
    cout << "Name: " << name << endl;
    cout << "Maximum Passengers: " << passengers << endl;
    cout << "--------------------------" << endl;
} // end function print

CruiseShip::~CruiseShip() {
}

