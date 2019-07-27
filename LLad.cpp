#include<iostream>
using namespace std;

class Node
{
	public:
	int value;
	Node *link;
    
    Node *head = NULL;
    Node *tail = NULL;
    Node * n = NULL;//Nodes
    Node  *front  = NULL; //New node to be inserted;

// Create Nodes
void create(int a)
{
	Node  *n = new Node;
	n->value = a;
	n->link = NULL;;
	
	if(head == NULL)
	{
		head = n;
		tail = n;
	}
	else
	{
		tail=tail->link = n;;
		tail = n;
	}
	
}

//Insert at front;

void Add_front(int x)
{
	Node *front = new Node;
	front->value = x;
	front->link = head;
	head = front;
	
}

void display()
{
	while(head!= NULL)
	{
		cout<<head->value<<endl;
		head = head->link;
	
	}
}
};

int main()
{
	Node x;
	cout<<"How many nodes\n?";
    int a ;
    cin>>a;
    int b;
    for(int i = 0 ; i< a ; i++)
    {
	  b = 0;
	  cin>>b;
    x.create(b);
    } 
    cout<<"Enter your luck number\n";
    int l;
    cin>>l;
    x.Add_front(l);
    
    x.display();
    return 0;
}































	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
