//employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

class employee
{
  public:
    employee(const string&, const string &, double 0.0);
    
    void setFirstName( const string & );
    string getFirstName() const;
    
    void setLastName( const string & );
    string getLastName() const;
    
    void setMonthlySalary( double );
    double getMonthlySalary() const;
    
  private:
    string firstName;
    string lastName;
    double monthlySalary;
};

#endif
