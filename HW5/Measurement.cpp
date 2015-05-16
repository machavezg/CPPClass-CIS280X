#include <iostream>
#include <iomanip>
#include "Measurement.h"
using namespace std;

Measurement::Measurement(int f, int i){
    setMeasurement(f,i);
}

void Measurement::setMeasurement(int f, int i) {
    int h;
    f = f * 12;
    i = i;
    h = f + i;
    setFeet(h);
    setInches(h);
}

void Measurement::setFeet(int f){
    feet = f / 12;
}

int Measurement::getFeet() const{
    return feet;
}

void Measurement::setInches(int i){
        inches = i % 12;
}

int Measurement::getInches() const{
    return inches;
}

//Rational operator
bool Measurement::operator ==(const Measurement& h){
    return ((feet == h.feet) &&
            (inches == h.inches));
}

bool Measurement::operator !=(const Measurement& h){
    return ((feet != h.feet) ||
            (inches != h.inches));
}
//Arithmetic overloaders
void Measurement::operator+(int h){
    inches += h;
    if( ( inches ) >= 12){
        feet += inches / 12;
        inches = inches % 12;
    }
}

void Measurement::operator-(int h){
    if ( inches >= h){
        inches -=h;
    }
    else{
        feet -= h / 12; 
        inches = ( inches + ( 12 * ( h / 12 ) ) - h);// in = 5 minus 23
    }
}

void Measurement::operator*(int m){
    if((inches *= m) >= 12){
        feet += inches / 12;
        inches = inches % 12;
    }
    else {
        inches *= m;
    }
}

//Relational operators
bool Measurement::operator>(const Measurement &h){
        if (feet > h.feet)
            return true;
        else if ((feet == h.feet) &&
            (inches > h.inches))
            return true;
        else
            return false;
}

bool Measurement::operator>=(const Measurement &h){
        if (feet > h.feet)
            return true;
        else if ((feet == h.feet) &&
            (inches > h.inches))
            return true;
        else if ((feet == h.feet) &&
            (inches == h.inches))
            return true;
        else
            return false;
}

bool Measurement::operator<(const Measurement &h){
        if (feet < h.feet)
            return true;
        else if ((feet == h.feet) &&
            (inches < h.inches))
            return true;
        else
            return false;
}

bool Measurement::operator<=(const Measurement &h){
        if (feet < h.feet)
            return true;
        else if ((feet == h.feet) &&
            (inches < h.inches))
            return true;
        else if ((feet == h.feet) &&
            (inches == h.inches))
            return true;
        else
            return false;
}

ostream &operator<<(ostream & output, const Measurement &h){
    return output << "[" << h.getFeet() << " feet, " << h.getInches() << " inches]";
}

istream &operator>>(istream & input, Measurement &h){
    input >> setw(2) >> h.feet;
    input.ignore();
    input >> setw(2) >> h.inches;
    return input; 
}

Measurement::~Measurement() {
}
