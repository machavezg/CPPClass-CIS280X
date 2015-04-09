//employee.h

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee
{
  public:
    Employee( const std::string &, const std::string &, double = 0.0 );
    
    void setFirstName( const std::string & );
    std::string getFirstName() const;
    
    void setLastName( const std::string & );
    std::string getLastName() const;
    
    void setMonthlySalary( double );
    double getMonthlySalary() const;
    
    void displayEmployee() const;
  private:
    std::string firstName;
    std::string lastName;
    double monthlySalary;
};

#endif
