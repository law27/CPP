

#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
 
int count = 0 , first = 0;
for(int i = 0 ; i<s.length() ; i++)
{
    if(s[i] >= 'a' || s[i]<= 'z' )
    {
        first++;
    }
   if(s[i] >='A' && s[i] <='A')
   {
       count++;
   }

}
 return count + first;
}

int main()
{
   
    string s;
    getline(cin, s);

    int result = camelcase(s);

   
    cout<<result<<endl;
   
    return 0;
}
