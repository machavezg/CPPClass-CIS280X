#ifndef DATE_H
#define	DATE_H

#include <iostream>
using namespace std;

class Measurement 
{
public:
    Measurement(int f = 1, int i = 1);
    ~Measurement();
    void setMeasurement(int, int);
    void setFeet(int f);
    int getFeet() const;
    void setInches(int i);
    int getInches() const;
    //Member Functions
    bool operator==(const Measurement &d);
    bool operator!=(const Measurement &d);
    //Arithmetic overloading
    void operator+(int d);
    void operator-(int d);
    void operator*(int d);

    bool operator>(const Measurement &d);
    bool operator<(const Measurement &d);
    bool operator>=(const Measurement &d);
    bool operator<=(const Measurement &d);
    //Non-Member Functions
    friend ostream &operator<<( ostream & output, const Measurement &d);
    friend istream &operator>>( istream & input, Measurement &d);
private:
    int feet, inches;
    
};

#endif
/* DATE_H */
