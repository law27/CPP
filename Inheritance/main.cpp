#include <iostream>
#include "CommissionEmployee.h"
#include "BaseCommission.h"
using namespace std ;

int main() {
    CommissionEmployee Lawrance("Lawrance" , "Michaelite" , "8888" , 3500 , 0.4) ;
    Lawrance.print() ;
    BaseCommission Rubesh ( "Rubesh" , "Auto" , "8999" , 4500 , 0.2 , 100) ;
    Rubesh.print() ;
    return 0;
};