#include<iostream>
using namespace std;

int main()
{ 
  int T;
  cin>>T;
  while(T--){
  int arr[200];
  int N;
  cin>>N;
  arr[0] = 1;
  int m = 1;
  int carry = 0;
  for(int x = 2 ; x <= N ; x++)
  {
  for(int i = 0 ; i<m ; i++)
  {
      int prod = arr[i] * x + carry;
      arr[i] = prod %10;
      carry = prod/10;
  }
  while(carry)
  {
     arr[m] = carry%10;
     carry = carry/10;
  
  m++;
  }
  }

  for(int i = m-1 ; i >= 0 ; i--)
  {
     cout<<arr[i]<<" ";
  }


  }
}