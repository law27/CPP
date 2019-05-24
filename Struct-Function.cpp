#include<iostream>
using namespace std;
struct Advertisements
{
 int howmany;
 double percentage;
 double total;
 };
 void PRINTCALC(Advertisements employee)
 {
  cout<<"Advertisements= "<<employee.howmany<<endl;
  cout<<"Percentage= "<<employee.percentage<<endl;
  cout<<"Total= "<<employee.total<<endl;
  int full =employee.howmany * employee.percentage* employee.total;
  cout<<"Full = "<<full<<endl;
  }
  int main()
  {
   Advertisements TODAY;
   cout<<"Enter about how many advertisements\n";
  cin>>TODAY.howmany;
  cout<<"Enter the number of percentage clicked\n";
  cin>>TODAY.percentage;
  cout<<"Earned per ads\n";
  cin>>TODAY.total;
PRINTCALC(TODAY) ;
  return 0;
  }
