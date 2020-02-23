//
// Created by lawrance on 23/02/20.
//
#include <iostream>
#include <iomanip>
#include "BaseCommission.h"
using namespace std ;

BaseCommission::BaseCommission(const string &firstName, const string &secondName,
            const string &securityNo, double sales, double rate, double base) : CommissionEmployee(firstName , secondName , securityNo , sales , rate )
{
    setBaseSalary( base ) ;
}

void BaseCommission::setBaseSalary(double salary)
{
    baseSalary = salary ;
}

double BaseCommission::getBaseSalary()
{
    return baseSalary ;
}

double BaseCommission::earning()
{
    return baseSalary + CommissionEmployee::earnings() ;
}

void BaseCommission::print()
{
    cout << "Base: Salary:  " << baseSalary << endl ;
    CommissionEmployee::print() ;
}