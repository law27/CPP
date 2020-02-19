//
// Created by lawrance on 19/02/20.
//

#include <iostream>
#include <stdexcept>
#include "Date.h"
using namespace std ;
Date::Date(int dt , int mn , int yr)
{
    if( mn > 0 && mn <= monthsPerYear)
        month = mn ;
    else
        throw invalid_argument("month must be between 1-12") ;

    year = yr ;
    day = checkDay( dt ) ;

    cout << "Date Object constructor for Date:  ";
    print() ;
    cout << endl ;
}

void Date::print() const {
    cout << month << '/' << day << '/' << year << endl ;
}

Date::~Date()
{
    cout << "Date Object Destructor for the date: " ;
    print() ;
    cout << endl ;
}

int Date::checkDay(int testDay) const {
    static const int *daysPerMonth;
    daysPerMonth = new int[monthsPerYear + 1]{
            0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    if(testDay > 0 && testDay <= daysPerMonth[month])
        return testDay ;

    //Check for Leap year

    if( month == 2 && testDay == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)))
        return testDay ;

    throw invalid_argument("INVALID DATE") ;
}
