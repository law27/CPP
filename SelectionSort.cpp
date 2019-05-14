#include<iostream>
using namespace std;

int main()
{
  int length;
  cin>>length;
  int arr[length];
  for(int i=0; i<length; i++)
         cin>>arr[i];

  for(int start=0; start<length-1; start++)
  {
     cout<<endl;
     int small = start;
     for(int current= start +1; current<length ; current++)
     {
        if(arr[current]<arr[small])
           small = current;

     }
     swap(arr[start], arr[small]);
     for(int k=0; k<length; k++)
        cout<<arr[k]<<" ";

  }

}
