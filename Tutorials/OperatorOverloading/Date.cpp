#include <iostream>
#include <iomanip>
#include "Date.h"
using namespace std;

Date::Date(int m, int d, int y){
    //setDate( month, day, year);
    month = m;
    day = d;
    year = y;
}

void Date::setDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::setMonth(int m){
    if (m < 1 || m > 12)
        cout << "Bad month value";
    else
        month = m;
}

int Date::getMonth() const{
    return month;
}

void Date::setDay(int d){
    day = d;
}

int Date::getDay() const{
    return day;
}

void Date::setYear(int y){
    year = y;
}

int Date::getYear() const{
    return year;
}

bool Date::operator ==(const Date& d){
    return ((month == d.month) &&
            (day == d.day) &&
            (year == d.year));
}
//Arithmetic overloaders
void Date::operator+(int d){
    day += d;
}

void Date::operator-(int d){
    day -= d;
}

void Date::operator+=(int d){
    day += d;
}

void Date::operator-=(int d){
    day -= d;
}
//Increment and decrement overloading
Date &Date::operator ++(){
    ++day;
    return *this;
}

Date &Date::operator ++(int){
    Date dy = *this;
    ++*this;
    return dy;
}

Date &Date::operator --(){
    --day;
    return *this;
}

Date &Date::operator --(int){
    Date dy = *this;
    --*this;
    return dy;
}

bool Date::operator>(const Date &d){
        if (year > d.year)
        return true;
        else if ((year == d.year) &&
            (month > d.month))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day > d.day))
        return true;
    else
        return false;
}

bool Date::operator>=(const Date &d){
        if (year > d.year)
        return true;
        else if ((year == d.year) &&
            (month > d.month))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day > d.day))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day == d.day))
        return true;
    else
        return false;
}

bool Date::operator<(const Date &d){
        if (year < d.year)
        return true;
        else if ((year == d.year) &&
            (month < d.month))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day < d.day))
        return true;
    else
        return false;
}

bool Date::operator<=(const Date &d){
        if (year < d.year)
        return true;
        else if ((year == d.year) &&
            (month < d.month))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day < d.day))
        return true;
    else if ((year == d.year) &&
            (month == d.month) &&
            (day == d.day))
        return true;
    else
        return false;
}

ostream &operator<<(ostream & output, const Date &d){
    return output << d.getMonth() << "/" << d.getDay() << "/"
                  << d.getYear();
}

istream &operator>>(istream & input, Date &d){
    input.ignore();
    input >> setw(2) >> d.month;
    input.ignore();
    input >> setw(2) >> d.day;
    input.ignore();
    input >> setw(4) >> d.year;
    return input; 
}


Date::~Date() {
}

