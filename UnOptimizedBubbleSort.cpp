#include<iostream>
using namespace std;

int main()
{
  int arr[10]= {10,9,8,7,6,5,4,3,2,1};
  int len = sizeof(arr)/sizeof(arr[0]);

  for(int start=0; start<len-1 ; start++)

     { for(int i=0; i<len-1; i++)
      {
        if(arr[i]>arr[i+1])
          swap(arr[i], arr[i+1]);
      }

    }
  for(int i=0; i<len ; i++)
  cout<<arr[i]<<" ";
}
