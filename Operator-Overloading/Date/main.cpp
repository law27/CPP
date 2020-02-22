#include <iostream>
#include "Date.h"
using namespace std ;

int main()
{
    Date d1( 27 , 12 , 2000) ;
    Date d2 ;

    cout << "d1: " << d1 << endl ;
    cout << "d2: " << d2 << endl ;

    cout << "After adding d1 with 7 Days: " <<  (d1 += 7) << endl ;

    d2.setDate( 28 , 2 , 2000) ;
    cout << "d2 is: " << d2 << endl ;

    cout << "For Leap Year: " << ++d2 << endl ;

    Date d3( 27 , 6 , 2000) ;
    cout << "d3: " << d3 << endl ;

    cout << "Testing pre-fix " << endl ;
    cout << ++d3 << endl ;
    cout << d3 << endl ;

    cout << "Testing post-fix " << endl ;
    cout << d3++ << endl ;
    cout << d3 << endl ;

    return 0;
}