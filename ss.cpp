#include<iostream>
using namespace std;

int multiply(int x , int array[] , int size);
int main()
{
  int max = 400;
  int array[max];
  int num ;
  cin>>num;
  
  array[0] = 1;
  int size = 1;

  for(int x = 1 ; x<=num ; x++)
  {   cout<<"here"<<" ";
	  size = multiply(x, array, size);
	  cout<<"size"<<"=="<<size<<"!!"<<endl;
  }
  for(int i = 0 ; i<size ; i++){
	  cout<<i<<endl;
  }
  
  
}
 int multiply(int x , int array[], int size)
 {
  
   
 }

















