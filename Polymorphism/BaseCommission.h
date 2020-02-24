//
// Created by lawrance on 23/02/20.
//

#ifndef INHERITANCE_BASECOMMISSION_H
#define INHERITANCE_BASECOMMISSION_H

#include "CommissionEmployee.h"

class BaseCommission : public CommissionEmployee
{
public:
    BaseCommission(const string& , const string& , const string&,
                   double = 0.0 , double = 0.0 , double = 0.0) ;

    void setBaseSalary(double) ;
    double getBaseSalary( void ) const ;

    virtual double earnings( void ) const ;
    virtual void print( void ) const ;
private:
    double baseSalary ;
};


#endif //INHERITANCE_BASECOMMISSION_H
