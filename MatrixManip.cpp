//This code changes the elements of upper right corner of a multi-dimensional array to 0
#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int array[n][n];

for(int i = 0 ; i< n ;i++)        //0 0 0
{                                 //4 5 0 
  for(int j = 0 ; j<n ; j++)      //7 8 9    
	{                                    
	    cin>>array[i][j];
	}
}

int i , j ;
for( i = 0 ; i < n; i++)
{
  for( j = i+1 ; j<n ; j++)
	{
    array[i][j] = 0;
  } 
  j++;
}
     
cout<<"The upper triangular matrix is"<<'\n';
for(int i = 0 ; i < n ;i++)
{
  for(int j = 0 ; j<n ; j++)
	{
    cout<<array[i][j]<<" ";
  }
    cout<<'\n';
}

}
