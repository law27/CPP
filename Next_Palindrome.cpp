#include <iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		string a;
		int f;
		cin>>a;
		string b = a;
		reverse(b.begin(),b.end());
		while(true)
		{
			if(a==b)
			{
				cout<<a<<endl;
				break;
			}
			stringstream(a)>>f;
			++f;
			stringstream ss;
			ss<<f;
			a = ss.str();
			b = a;
			reverse(b.begin(),b.end());
		}
	}
	return 0;
}
