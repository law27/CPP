#include <iostream>
#include "Employee.h"
#include "Date.h"

int main()
{
    Date birth( 27 , 6 , 2000) ;
    Date hire( 6 , 6 , 2019) ;
    Employee manager( "Lawrance" , "Michaelite" , birth , hire) ;

    std::cout << std::endl ;

    manager.print() ;
}