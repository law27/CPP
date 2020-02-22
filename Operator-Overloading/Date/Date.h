//
// Created by lawrance on 22/02/20.
//

#ifndef DATE_DATE_H
#define DATE_DATE_H

#include <iostream>
using std::ostream ;

class Date
{
    friend ostream& operator<<( ostream& output , const Date& date ) ;

public:
    Date( int d = 1 , int m = 1 , int y = 1900) ;
    void setDate( int , int , int) ;
    Date& operator++() ;
    Date operator++( int ) ;
    const Date& operator+=( int ) ;
    static bool leapYear( int ) ;
    bool endOfMonth( int ) const ;

private:
    unsigned int date ;
    unsigned int month ;
    unsigned int year ;

    static const int days[] ;
    void helpIncrement() ;
};



#endif //DATE_DATE_H
