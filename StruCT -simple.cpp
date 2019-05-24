#include<iostream>

using namespace std;
struct Advertisements
{

 int howmany;
 double percentage;
 double total;
 };




  int main()
  {

  Advertisements TODAY ;
  cout<<"Enter about howmany advertisements\n";
  cin>>TODAY.howmany;
  cout<<"Enter the number of percentage clicked\n";
  cin>>TODAY.percentage;
  cout<<"Earned per ads\n";
  cin>>TODAY.total;
  int full =TODAY.howmany *  TODAY.percentage * TODAY.total;

  cout<<full<<endl;

  return 0;
  }
