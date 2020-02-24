//
// Created by lawrance on 24/02/20.
//
#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee(const string &firstName , const string &secondName , const string &securityNumber)
{
    setFirstName(firstName) ;
    setSecondName(secondName) ;
    setSecurityNumber(securityNumber) ;
}

void Employee::setFirstName(const string &firstName)
{
    this->firstName = firstName ;
}

string Employee::getFirstName() const
{
    return firstName ;
}

void Employee::setSecondName(const string &second)
{
    secondName = second ;
}

string Employee::getSecondName() const
{
    return secondName ;
}

void Employee::setSecurityNumber(const string &sec)
{
    securityNumber = sec ;
}

string Employee::getSecurityNumber() const
{
    return securityNumber ;
}

void Employee::print() const
{
    cout << getFirstName() << " " << getSecondName() << endl ;
    cout << "SecurityNumber: " << getSecurityNumber() << endl ;
}