//
// Created by lawrance on 24/02/20.
//

#ifndef POLYMORPHISM_SALARIEDEMPLOYEE_H
#define POLYMORPHISM_SALARIEDEMPLOYEE_H

#include "Employee.h"
#include <iostream>
using namespace std ;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee(const string& , const string& , const string& , int) ;
    void setSalary( int ) ;
    int getSalary( void ) ;

    virtual double earnings( void ) const ;
    virtual void print( void ) const ;

private:
    int salary ;
};

#endif //POLYMORPHISM_SALARIEDEMPLOYEE_H
