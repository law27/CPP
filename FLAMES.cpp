#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    string Name_1;
   string Name_2;
    cout<< "Enter the First Name"<<endl;
  getline(cin , Name_1);
   string First = Name_1;
    cout<< "Enter the Second Name"<<endl;
 getline(cin , Name_2);
  string Second = Name_2;
    int a= Name_1.length();
    int b= Name_2.length();
    cout<<"The Length of First Name is : " << a<<endl;
    cout<<"The Length of Second Name is : "<< b<< endl;
    int c=0;
    int d=0;
  if(a>=b)
  {
      for(int i=0; i<b; i++)
      {
          for(int j=0; j<a; j++)
          {
              if(Name_1[i]==Name_2[j])
              {
                  c+=1;
                  Name_2[j]=0;
              }
          }
      }
  }
  else
{
      for(int i=0; i<a; i++)
      {
          for(int j=0; j<b; j++)
          {
              if(Name_2[i]==Name_1[j])
              {
                  c+=1;
                  Name_1[j]=0;
              }
          }
      }
  }
//Just a testing of Vim editor... By the way its cool 					
  a = a-c;
  b = b-c;
  a = a+b;
if(a==2 || a==4 || a==7  || a==9 || a==20)
    cout<< First << " and "<< Second << " are Enemies"<<endl;

else if(a==3 || a==5 || a==14 || a==16 || a==18)
  cout<< First << " and "<<Second << " are just Friends"<<endl;

else if(a==8 || a==12 || a==17)
    cout<< First << " and "<< Second<< " are affectionate to Each other"<<endl;

else if(a==6 || a==11 || a==15)
    cout<< First<< " and "<<Second << " will get Married soon"<<endl;

else if(a==10)
    cout<< First << " and "<< Second << " are Lovers"<<endl;

else
    cout<< First << " and "<< Second<< " are Brother and sister"<<endl;


    return 0;
}
