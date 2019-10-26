
//Factorial of Large numbers in CPP
#include<iostream>
using namespace std;

int main()
{ 
  int T; // Testcase
  cin>>T;
  while(T--){
  int arr[200]; // For storing max numbers of digit4*3*
  int N; //The number to find its factorial
  cin>>N;
  arr[0] = 1; //Digit 1
  int m = 1; //The size of array
  int carry = 0;
  for(int x = 2 ; x <= N ; x++) //factorial calculation starts ends with 2 ( 4! = 4*3*2 ) 
  {
  for(int i = 0 ; i<m ; i++)  // Traversing from the needed digits
  {
      int prod = arr[i] * x + carry; // 1 * 2 + 0 = 2
      arr[i] = prod %10;  //remainder
      carry = prod/10;     // quotient
  }
  while(carry)   // while carry remains ( carry != 0)
  { 
     arr[m] = carry%10;    //store rem-carry in array of m size
     carry = carry/10;   //divide carry by itself
  
  m++;   //Increase sixe of carry
  }
  }
//For Printing , its backwards !!
  for(int i = m-1 ; i >= 0 ; i--)
  {  cout<<"The factorial of <<" "<<N<<"is"<<endl;              
     cout<<arr[i]<<" ";
  }


  }
}
