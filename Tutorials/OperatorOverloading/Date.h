#ifndef DATE_H
#define	DATE_H

#include <iostream>
using namespace std;

class Date 
{
public:
    Date(int m = 1, int d = 1, int y = 1900);
    ~Date();
    void setDate(int, int, int);
    void setMonth(int m);
    int getMonth() const;
    void setDay(int d);
    int getDay() const;
    void setYear(int y);
    int getYear() const;
    //Member Functions
    bool operator==(const Date &d);
    //Arithmetic overloading
    void operator+(int d);
    void operator-(int d);
    void operator+=(int d);
    void operator-=(int d);
    //Increment and decrement overloading
    Date &operator++();
    Date &operator++(int);
    Date &operator--();
    Date &operator--(int);
    bool operator>(const Date &d);
    bool operator<(const Date &d);
    bool operator>=(const Date &d);
    bool operator<=(const Date &d);
    //Non-Member Functions
    friend ostream &operator<<( ostream & output, const Date &d);
    friend istream &operator>>( istream & input, Date &d);
private:
    int month, day, year;
    
};

#endif
/* DATE_H */
