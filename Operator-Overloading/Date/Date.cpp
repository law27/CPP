//
// Created by lawrance on 22/02/20.
//

#include <iostream>
#include "Date.h"
#include <string>
using namespace std ;

const int Date::days[] = { 0 ,31 , 28 , 31 , 30 ,31 , 30 , 31 ,31 , 30 ,31 , 30 ,31};

Date::Date( int d , int m , int y)
{
    setDate( d , m , y ) ;
}

void Date::setDate(int d , int m , int y)
{
    if ( m > 0 && m <= 12)
        month = m ;
    else
        throw invalid_argument("Month is not a valid One") ;

    if( y >= 1900 && y <= 2100)
        year = y ;
    else
        throw invalid_argument("Year is not a Valid One") ;

    if( ( month == 2 && leapYear( year ) && d >= 1 && d <= 29 ) ||
      ( d >=1 && d <= days[month]))
        date = d ;
}

//OverLoading Functions Starts

Date& Date::operator++()
{
    helpIncrement() ;
    return *this ;
}

Date Date::operator++(int)
{
    Date temp = *this ;
    helpIncrement()  ;

    return temp ;
}

const Date& Date::operator+=(int additionalDays)
{
    for( int i = 0 ; i < additionalDays ; i++)
        helpIncrement() ;

    return *this ;
}

bool Date::leapYear(int testYear)
{
    return testYear % 400 == 0 ||
           (testYear % 100 != 0 && testYear % 4 == 0);
}

bool Date::endOfMonth(int testDay) const
{
    if( month == 2 && leapYear( year ))
        return testDay == 29 ;
    else
        return testDay == days[month] ;
}

void Date::helpIncrement()
{
  if ( !endOfMonth( date))
      ++date ;
  else
      if( month < 12)
      {
          ++month ;
          date = 1 ;
      } else
      {
          ++year ;
          month = 1 ;
          date = 1 ;
      }
}

ostream &operator<<( ostream& output , const Date& date)
{
    static string month[13] = { "" , "January" , "February" , "March" , "April" , "May",
                                "June" , "July" , "August" , "September" , "October" ,
                                "November" , "December"};
    output << date.date << "/" << date.month << "/" << date.year ;
    return output ;
}