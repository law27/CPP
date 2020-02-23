//
// Created by lawrance on 22/02/20.
//
#include <iostream>
#include <stdexcept>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std ;

CommissionEmployee::CommissionEmployee(const string &first, const string &second, const string &secNumber,
        double gSales, double Rate)
{
    firstName = first ;
    secondName = second ;
    securityNumber = secNumber ;
    setGrossSales( gSales ) ;
    setRate(Rate) ;
}

void CommissionEmployee::setFirstName(const string &firstName)
{
    this->firstName = firstName ;
}

string CommissionEmployee::getFirstName() const
{
    return firstName ;
}

void CommissionEmployee::setSecondName(const string &second)
{
    secondName = second ;
}

string CommissionEmployee::getSecondName() const
{
    return secondName ;
}

void CommissionEmployee::setSecurityNumber(const string &sec)
{
    securityNumber = sec ;
}

string CommissionEmployee::getSecurityNumber() const
{
    return securityNumber ;
}

void CommissionEmployee::setGrossSales(double gSales)
{
    if( gSales >= 0.0)
        grossSales = gSales ;
    else
        throw invalid_argument( " It should be Greater than Zero") ;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales ;
}

void CommissionEmployee::setRate(double rate)
{
    if( rate > 0.0 && rate < 1.0)
        commissionRate = rate ;
    else
        throw invalid_argument("Wrong Argument") ;
}

double CommissionEmployee::getRate() const
{
    return commissionRate ;
}

double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales ;
}

void CommissionEmployee::print() const
{
    cout << fixed << setprecision(2) << endl ;

    cout << getFirstName() << ", " << getSecondName() << ":  "
        << "Commission Rate: " << getRate() << "  grossSales: " << getGrossSales()
        << "  The Earning is: " << earnings() << endl  ;
}