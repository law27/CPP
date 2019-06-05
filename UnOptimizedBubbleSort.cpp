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
                                           /*********Harshi**********/
                    
                                                //Unoptimized
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int length ;
  cout<<"Enter the number of array elements\n";
  cin>>length;  

  int arr[length];

  for(int i = 0; i <length ; i++)
  {
  cout<<"Enter the element\n";
  cin>>arr[i];
              }

  for(int startindex = 0; startindex<length; startindex++)
  {
    for(int currentindex = startindex+1; currentindex<length ; currentindex++)
     {
     if(arr[currentindex]>arr[startindex])

     swap(arr[startindex],arr[currentindex])  ;
     }
     }

     for(int index =0; index<length ; index++)
     cout<<arr[index] << " ";


      return 0;
     }
