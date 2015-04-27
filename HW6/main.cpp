#include <iostream>
#include <string>
#include "Ship.h"
#include "CruiseShip.h"
#include "CargoShip.h"

using namespace std;

int main()
{ 
//    Ship ship1("Lolipop");
//    ship1.print();
//    CruiseShip ship2("Majesty of the Seas", 2744);
//    ship2.print();
//    CargoShip ship3("Black Pearl", 50000);
//    ship3.print();

    unsigned int array_size = 3;
    
    Ship *s [ array_size ] =
    {
        new Ship("Lolipop", "1960"),
        new CruiseShip("Disney Magic", 2400),
        new CargoShip("Black Pearl", 50000)
    };

    for(int i; i<3; i++)
    {
        s[i] -> print();
    }
}
