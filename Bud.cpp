#include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node *next;
    Node *head = NULL;
    Node *tail = NULL;
    Node *head1 = NULL;
    Node *tail1 = NULL;
	
	//Hello checked for vscode git integration
	
    
void cclone(int a)
{
	Node *n = new Node;
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
	 tail = n;
 }
 
  if( head1 == NULL)
  {
	  head1 = head;
	  head1->next = head->next;
	  head1->data = head->data;
  }
  
  else
  {
	  tail1 = tail;
	  tail1->next = tail->next;
  }
  
 }

void display()
{

	while(head != NULL)
	{
		cout<<head->data<<" "<<endl;
		head = head->next;
	}
	cout<<"Cloned List"<<endl;
	while(head1 != NULL)
	{
		cout<<head1->data<<" ";
		head1= head1->next;
	}
	
}
};

int main()
{
	Node no;
	int a;
	cout<<"How many nodes"<<endl;
	cin>>a;
	
	int b;
	for(int i = 1; i <=a ; i++)
	{
		b = 0;
		cin>>b;
	no.cclone(b);
    }
    
    no.display();
    return 0 ; 
}
    
   
	
	
	
	
	
	
	
	
 
 
 
 

 
 
 
 
 
 
 
 
 
 
 
 
	
    
    
    


