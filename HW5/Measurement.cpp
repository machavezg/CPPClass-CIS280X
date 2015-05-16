#include <iostream>
#include <iomanip>
#include "Measurement.h"
using namespace std;

Measurement::Measurement(int f, int i){
    //setDate( month, day, year);
    feet = f;
    inches = i;
}

void Measurement::setMeasurement(int f, int i) {
    feet = f;
    inches = i;
}

void Measurement::setFeet(int f){
    if (f < 1 || f > 12)
        cout << "Bad month value";
    else
        feet = f;
}

int Measurement::getFeet() const{
    return feet;
}

void Measurement::setInches(int i){
    inches = i;
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
}

void Measurement::operator-(int h){
    inches -= h;
}

void Measurement::operator*(int m){
    inches *= m;
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

//Bitwise operators aka binary operators
ostream &operator<<(ostream & output, const Measurement &h){
    return output << "[" << h.getFeet() << " feet, " << h.getInches() << " inches]";
}

istream &operator>>(istream & input, Measurement &h){
    input >> setw(2) >> h.inches;
    input.ignore();
    input >> setw(2) >> h.feet;
    return input; 
}


Measurement::~Measurement() {
}

