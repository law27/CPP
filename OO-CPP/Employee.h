//
// Created by lawrance on 19/02/20.
//
#include <string>
#include "Date.h"

using  std::string ;
#ifndef EMPLOYEE_EMPLOYEE_H
#define EMPLOYEE_EMPLOYEE_H

class Employee
{
public:
    Employee(const string & , const string &, const Date &, const Date & ) ;
    void print() const ;
    ~Employee() ;

private:
    string firstName ;
    string lastName ;
    const Date birthDate ;
    const Date hireDate  ;
};

#endif //EMPLOYEE_EMPLOYEE_H
