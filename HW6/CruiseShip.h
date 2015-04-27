#ifndef CRUISESHIP_H
#define	CRUISESHIP_H
#include "Ship.h"

class CruiseShip : public Ship{
public:
   CruiseShip( const std::string &, int = 0 );
   
   void setPassengers( int ); // set base salary
   int getPassengers() const; // return base salary

   virtual void print() const; // print CommissionEmployee object
   virtual ~CruiseShip();
protected:
   int passengers;
};

#endif	/* CRUISESHIP_H */

