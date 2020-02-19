//
// Created by lawrance on 19/02/20.
//

#ifndef EMPLOYEE_DATE_H
#define EMPLOYEE_DATE_H

class Date
{
public:
    static const int monthsPerYear = 12 ;
    Date( int = 1 , int = 1 , int = 1990) ;
    void print() const ;
    ~Date() ;

private:
    int month ;
    int day ;
    int year ;

    int checkDay(int) const ; //Predicate Function
};

#endif //EMPLOYEE_DATE_H
