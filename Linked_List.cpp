#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

class Linked{
    private:
     Node *head,*tail;
    public:
     Linked()
     {
         head = NULL;
         tail = NULL;
     }
     void Add_End(int n)
     {
         Node *tmp = new Node();
         tmp->data = n;
         tmp->next = NULL;
         if(head==NULL)
         {
             head = tmp;
             tail = tmp;
         }
         else
         {
             tail->next=tmp;
             tail = tail->next;
         }
     }
     Node* Head()
     {
         return head;
     }
     void Add_Front(int n)
     {
         Node *tmp = new Node();
         tmp->data = n;
         tmp->next = Head();
         head = tmp;
     }
     void Insert_Pos(int pos,int value)
     {
         if(pos==1)
         {
             Add_Front(value);
         }
         Node* back = new Node;
         Node* front = new Node;
         Node* tmp = new Node;
         front = Head();
         for(int i=1;i<pos;i++)
         {
             back = front;
             front = front->next;
         }
         tmp->data = value;
         back->next = tmp;
         tmp->next = front;
     }
     void Delete_First()
     {
         Node* tmp = new Node;
         tmp = head;
         head = head->next;
         delete tmp;
     }
     void Delete_last()
     {
         Node* tmp = new Node;
         Node* ptr = new Node;
         tmp = Head();
         while(tmp->next!=NULL)
         {
             ptr = tmp;
             tmp = tmp->next;
         }
         tail = ptr;
         tail->next = NULL;
         delete tmp;
         
     }
     void Delete_Pos(int pos)
     {
         Node* back = new Node();
         Node* front = new Node();
         front = Head();
         for(int i=1;i<pos;i++)
         {
            back = front;
            front = front->next;
         }
         back->next = front->next;
     }
     void Print()
     {
         Node *ptr = head;
         while (ptr!=NULL)
         {
             cout<<ptr->data<<" ";
             ptr = ptr->next;
         }

     }
};

int main()
{
    Linked lawrance;
    int i;
    Again:
    cout<<"Enter What you want to do?"<<endl;
    cout<<"1. Create a New Linked_List"<<"\n"<<"2. Add a Node in Front of the Linked_list"<<"\n"<<"3. Add a Node at the End of the Linked List"<<"\n"<<"4.Add a Node at the Given position"<<endl;
    cout<<"5. Delete a Node in the Front of the Linked_list"<<"\n"<<"6. Delete a Node at the end of the Linked_list"<<"\n"<<"7.Delete a Node at a Given Position"<<endl;
    cout<<"0. Exit"<<endl;
    cin>>i;
    if(i==1)
    {
       int a;
       cout<<"How many Nodes do you want to Enter?"<<endl;
       cin>>a;
       int b;
       for(int i=0; i<a;i++)
       {
           b = 0;
           cout<<"Enter the "<<i+1<<" Value: "<<endl;
           cin>>b;
           lawrance.Add_End(b);
       }
       lawrance.Print();
       goto Again;
    }
    else if(i==2)
    {
        int a;
       cout<<"Enter the value that has to be added in the Front of the Linked list"<<endl;
       cin>>a;
       lawrance.Add_Front(a);
       cout<<"Node has been added!"<<endl;
       lawrance.Print();
       goto Again;  
    }
    else if(i==3)
    {
         int a;
       cout<<"Enter the value that has to be added in the End of the Linked list"<<endl;
       cin>>a;
       lawrance.Add_End(a);
       cout<<"Node has been added!"<<endl;
       lawrance.Print();
       goto Again;  
    }
    else if(i==4)
    {
        int a,b;
        cout<<"Enter the Position that you want to Add a Node"<<endl;
        cin>>a;
        cout<<"Enter the Value"<<endl;
        cin>>b;
        lawrance.Insert_Pos(a,b);
        cout<<"Node has been added in the Given Position"<<endl;
        lawrance.Print();
        goto Again;
    }
    else if(i==5)
    {
        lawrance.Delete_First();
        cout<<"The Front Node has been Deleted"<<endl;
        lawrance.Print();
        goto Again;
    }
    else if(i==6)
    {
        lawrance.Delete_last();
        cout<<"The Last Node has been Deleted"<<endl;
        lawrance.Print();
        goto Again;
    }
    else if(i==7)
    {
        int a;
        cin>>"Enter the position of the Node that has to be deleted"<<endl;
        cin>>a;
        lawrance.Delete_Pos(a);
        cout<<"Linked_List has been Altered"<<endl;
        lawrance.Print();
        goto Again;
    }
    else if(i==0)
    {
        cout<<"Thank You"<<endl;
        break;
    }
  return 0;

}
