#ifndef SHIP_H
#define	SHIP_H

class Ship {
public:

    Ship(); //Constructor
    Ship( const std::string &);
    Ship( const std::string &, const std::string & );
   
    void setName( const std::string & ); // set first name
    std::string getName() const; // return first name

    void setYear( const std::string & ); // set commission rate (percentage)
    std::string getYear() const; // return commission rate

    virtual void print() const; // print CommissionEmployee object
    virtual ~Ship();
protected:
    std::string name;
    std::string year; // commission percentage
};

#endif	/* SHIP_H */

