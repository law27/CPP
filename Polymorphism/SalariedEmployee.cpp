//
// Created by lawrance on 24/02/20.
//
#include "SalariedEmployee.h"
#include "Employee.h"
#include <iostream>
using namespace std ;

SalariedEmployee::SalariedEmployee(const string& firstName ,
        const string& secondName , const string& securityNumber ,
        int salary ) : Employee( firstName ,secondName , securityNumber)
{
    setSalary(salary) ;
}

void SalariedEmployee::setSalary(int salary)
{
    this->salary = salary ;
}

int SalariedEmployee::getSalary()
{
    return salary ;
}

double SalariedEmployee::earnings() const
{
    return salary ;
}

void SalariedEmployee::print() const
{
    cout << "Salaried Employee: " << endl ;
    Employee::print() ;
    cout << "earnings: " << earnings() << endl ;
}
