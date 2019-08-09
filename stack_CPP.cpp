#include<iostream>
using namespace std;

class Stack{
    private:
       int head;
       string name[5];
    public:
       Stack()
       {
           head = -1;
       }
       void push(string n)
       {
           if(head<5)
                {
                    cout<<n<<" is pushed to the Stack"<<endl;
                    name[++head] = n;
                }
           else
              {
                 cout<<"StackOverFlow"<<endl;
              }
        }
      string pop()
          {
              if(head==-1)
              {
                  cout<<"Stack Underflow"<<endl;
              }
              else
              {
                  string n = name[head--];
                  cout<<n<<" is poped from the Stack and there are "<<head+1<<" elements remaining in the Stack"<<endl;
                  return n;
              }
          }    
};

int main()
{
    Stack a;
    a.push("Lawrance");
    a.pop();
    a.push("Harshitha");
    a.push("Karthick");
    a.push("Kailas");
    a.push("Roman");
    a.pop();
    a.pop();
    a.pop();
    return 0;
}