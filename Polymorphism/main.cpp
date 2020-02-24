#include <iostream>
#include <vector>
#include "BaseCommission.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
int main()
{
    vector< Employee* > employee(3) ;
    SalariedEmployee salariedEmployee("Lawrance" , "Michaelite" , "1802052" , 100) ;
    CommissionEmployee commissionEmployee( "Karthick" , "Rubesh" , "1802042" , 750 , 0.4) ;
    BaseCommission baseCommission( "Harshitha" , "Rupesh" , "1802032" , 6700 , 0.5 , 100) ;

    employee[0] = &salariedEmployee ;
    employee[1] = &commissionEmployee ;
    employee[2] = &baseCommission ;

    for(int i = 0 ; i < 3 ; i++) {
        employee[i]->print();
        cout << endl ;
    }
    return 0 ;
}
