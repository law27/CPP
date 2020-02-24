//
// Created by lawrance on 23/02/20.
//
#include <iostream>
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

double BaseCommission::getBaseSalary() const
{
    return baseSalary ;
}

double BaseCommission::earnings() const
{
    return baseSalary + CommissionEmployee::earnings() ;
}

void BaseCommission::print() const
{
   cout << "Base Commission: " << endl ;
   CommissionEmployee::print() ;
   cout << "Base Salary:  " << getBaseSalary() << endl ;
   cout << "Total Earnings: " << BaseCommission::earnings() + baseSalary << endl ;
}