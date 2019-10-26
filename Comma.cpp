#include<iostream>
using namespace std;

int main()
{
    int start;
    int limit ; 
    cin>>start;
    cin>>limit;
    for(int i = start; i < limit ; i++) //45 49
    {
        cout<<i<<"";     //  45 , 46 , 47 , 48 
        if(i != limit-1)
        cout<<",";
        
    }
    cout<<endl;
}