#include<iostream>
using namespace std;

class Box
{
	public:
	int data;
	Box *next;
	Box *head = NULL;
	Box *tail = NULL;
	Box *n ;
	
//Insert End	
void Insert_End(int a)
{
	Box *n = new Box;
	n->data = a;
	n->next = NULL;
	
	if(head == NULL)
{
	head = n;
	tail = n;
}
     else
{
	tail->next = n;
	tail = tail->next;
}

}
//Insert at Front

void Insert_Front(int a)
{
	Box *n = new Box;
	n->data = a;
	n->next = head;
	head = n;
	
}
//Insert at Position
void Insert_pos(int pos, int a)
{
   Box  *front = new Box;
   Box  *back  = new Box;
   Box  *temp = new Box;
   
   front = head;
   for(int i = 1; i< pos ; i++ )
{
	 back = front;
	 front = front->next;
}
    back->next = temp;
    temp->next = front;
    temp->data = a;
    
}


 void display()
 {
	 while(head  != NULL)
	 {
		
		 cout<<head->data<<" ";
		 head = head->next;
		  
	 }
}

};

int main()
{
	Box o;
	cout<<"How many nodes"<<endl;
	int a;
	cin>>a;
	
	int b;
	for(int i = 1; i<=a; i++)
	{
		b = 0;
		cout<<"Enter"<<" "<<i<<" "<<"value"<<endl;
		cin>>b;
	o.Insert_End(b);
    }
   cout<<"To add in the beginning!"<<endl; 
   cout<<"Now....enter your lucky number!"<<endl;
   
   int g;
   cin>>g;
   
   o.Insert_Front(g);
   cout<<"Added"<<endl;
   
   cout<<"Now...Let's add in the middle!"<<endl;
   int l;
   cout<<"Which position do you want?"<<endl;
   cin>>l;
   cout<<"Value?"<<endl;
   int z;
   cin>>z;
 
   cout<<"Cool"<<endl;
   o.Insert_pos(l,z);
   
    
  
    o.display();
    cout<<"\nThe End\n";
    return 0;
}