#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> num ;
    int input ;
    while( cin >> input)
        num.push_back(input) ;
    for(vector<int>::size_type i = 0 ; i != num.size() ; i++)
    {
        if((num[i] + num[i+1] % 2 != 0)){
            
          cout << "OMG Odd Number" << endl ;
          break ;
        }
        else
        {
            cout << num[i] + num[i+1] << endl ;
        }
    }
    cout << "Exercise Over" << endl ;
   }
