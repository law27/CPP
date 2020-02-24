//
// Created by lawrance on 22/02/20.
//
#include <iostream>
#include <stdexcept>
#include <iomanip>

#include "CommissionEmployee.h"
#include "Employee.h"
using namespace std ;

CommissionEmployee::CommissionEmployee(const string &first, const string &second, const string &secNumber,
        double gSales, double Rate) : Employee( first , second , secNumber)
{
    setGrossSales( gSales ) ;
    setRate(Rate) ;
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
    cout << "Commission Employee: " << endl ;
    cout << fixed << setprecision(2) << endl ;

    Employee::print() ;
    cout << "The Commission Rate: " << getRate() << " the Gross Sales: " << getGrossSales() << endl ;
    cout << "Earnings: " << earnings() << endl ;
 }