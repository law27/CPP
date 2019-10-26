#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
 
int sec = 0; int first =0;
for(int i = 0 ; i<s.length() ; i++)
{
    if(s[i] =='a' || s[i]<= 'z')  //Check small letters
    {
        first++;
        break;
    }
}
for(int i = 0 ; i<s.length() ; i++)  //Check Capital letters
{
    if(s[i] >='A' && s[i]<= 'Z' )
    sec++;
}
 return sec + first;         //Add Both
}

int main()
{
    string s;
    getline(cin, s);
    int result = camelcase(s);
    cout << result << "\n";
    return 0;
}
                           //Lawran's Algo                           
#include<iostream>
using namespace std;
int camelCase(string name) 
{
    int count = 0;
    for(int i=0; i < name.length() ; i++)
    if(name[i] >= 'A' && name[i] <= 'Z')
       count++;         
    return count+1;              //Its always the cpaital words + 1 = small letters
}
int main()
{
    string name;     
    cin>> name;
    cout << camelCase(name) << endl;
    return 0;
}