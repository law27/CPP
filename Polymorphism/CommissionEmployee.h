//
// Created by lawrance on 22/02/20.
//

#ifndef INHERITANCE_COMMISSIONEMPLOYEE_H
#define INHERITANCE_COMMISSIONEMPLOYEE_H

#include <iostream>
#include "Employee.h"
using std::string ;

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const string& , const string& , const string&,
                       double = 0.0 , double = 0.0) ;
    void setFirstName( const string& ) ;
    string getFirstName( void ) const  ;

    void setSecondName(const string& ) ;
    string getSecondName( void ) const ;

    void setSecurityNumber( const string& ) ;
    string getSecurityNumber( void ) const ;

    void setGrossSales(double) ;
    double getGrossSales(void) const;

    void setRate(double) ;
    double getRate(void) const ;

    virtual double earnings( void ) const ;
    virtual void print( void ) const ;
private:
    string firstName ;
    string secondName ;
    string securityNumber ;
    double grossSales ;
    double commissionRate ;
};

#endif //INHERITANCE_COMMISSIONEMPLOYEE_H
