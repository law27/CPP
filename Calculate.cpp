#include<iostream>
using namespace std;

int Calculate(int a,int b, char c)
 {
 switch(c)
 {
case 'a':
    cout<<a+b<<endl;
    break;
case 's':
    cout<<a-b<<endl;
    break;
case 'm':
    cout<<a*b<<endl;
    break;
case 'd':
    cout<<a/b<<endl;
    break;
case 'r':
    cout<<a%b<<endl;
    break;
default:
    cout<<"Error"<<endl;
 }
}

int main()
{
int l,m;
char n;
cin>>l>>m;
cin>>n;
Calculate(l,m,n);
return 0;

}
