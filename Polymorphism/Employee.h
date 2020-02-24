//
// Created by lawrance on 24/02/20.
//

#ifndef POLYMORPHISM_EMPLOYEE_H
#define POLYMORPHISM_EMPLOYEE_H

#include <iostream>
using namespace std ;

class Employee
{
public:
    Employee(const string& , const string& , const string& ) ;

    void setFirstName( const string& ) ;
    string getFirstName( void ) const  ;

    void setSecondName(const string& ) ;
    string getSecondName( void ) const ;

    void setSecurityNumber( const string& ) ;
    string getSecurityNumber( void ) const ;

    virtual double earnings( void ) const = 0 ;
    virtual void print( void ) const ;

private:
    string firstName ;
    string secondName ;
    string securityNumber ;
};

#endif //POLYMORPHISM_EMPLOYEE_H
