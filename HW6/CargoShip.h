#ifndef CARGOSHIP_H
#define	CARGOSHIP_H
#include "Ship.h"

class CargoShip : public Ship{
public:
   CargoShip( const std::string &, int = 0 );
   
   void setTonnage( int ); // set base salary
   int getTonnage() const; // return base salary

   virtual void print() const; // print CommissionEmployee object
   virtual ~CargoShip();
protected:
   int tonnage;
};

#endif	/* CARGOSHIP_H */

