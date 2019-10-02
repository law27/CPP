#include<iostream>
using namespace std;

int main()
{
    int start;
    int limit ; 
    cin>>start;
    cin>>limit;
    for(int i = start; i < limit ; i++)
    {
        cout<<i<<"";
        if(i!= limit-1)
        cout<<",";
    }
}