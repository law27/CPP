//
// Created by lawrance on 19/02/20.
//
#include <iostream>
#include "Date.h"
#include "Employee.h"
using namespace std;

Employee::Employee(const string &first , const string &last ,
        const Date &DOB , const Date &DOH )
        : firstName(first) ,
        lastName(last) ,
        birthDate( DOB ) ,
        hireDate( DOH )
{
    cout << "Employee Object Constructor: " << firstName << " " << lastName << endl ;
}

void Employee::print() const
{
    cout << firstName << " " << lastName << "Hired: ";
    hireDate.print() ;
    cout << "BirthDay: " ;
    birthDate.print() ;
    cout << endl ;
}

Employee::~Employee()
{
    cout << "Employee object destructor: "
    << lastName << ", " <<firstName << endl ;
}
