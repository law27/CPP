#include<iostream>
#include<string>
using namespace std;

void Sorting(string *array, int limit);

int main()
{
    //To get the input
    cout<< "How many names you are going to Enter? "<< "\n";
    int number;
    cin>>number;
    //Declaring a string array(Dynamic Allocation)
    string *names = new string[number];
    //To get the input of names
    for(int i=0; i<number; ++i)
    {
        cout<< "Enter the #"<<i+1<<" name:  ";
        cin>>names[i];
    }
    //Passing the values to the function to sort the names
    Sorting(names,number);
    //Output for the sorted string array
    for(int i=0;i<number;++i)
        cout<< "The #"<<i+1<<" name:  "<<names[i]<<endl;

    delete[] names;
    return 0;
}

void Sorting(string *array , int limit)
{
    for(int start=0; start<limit-1; ++start)
    {
        //Assuming the first element is the smallest one
       int small = start;
       for(int current=start+1;current<limit; ++current)
       {
           if(array[small]>array[current])
                small = current;
       }
       //Swap
       swap(array[start], array[small]);
    }
}
