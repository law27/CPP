#include<iostream>
using namespace std;

struct node{
    int data;
    node* right;
    node* left;
};

class BST{
private:
    node *root;
    node* Create_Node(int data)
    {
        node* temp = new node;
        temp->data = data;
        temp->left = temp->right = NULL;
        return temp;
    }
    node* Insert(node* temp, int data)
    {
        if(temp==NULL && root==NULL)
            root = Create_Node(data);
        if(temp==NULL)
            temp = Create_Node(data);
        else if(data <= temp->data)
            temp->left = Insert(temp->left,data);
        else
            temp->right = Insert(temp->right,data);
        return temp;
    }
    bool Searching(node*temp, int data)
    {
        if(temp==NULL)
            return false;
        else if(temp->data == data)
            return true;
        else if(data<=temp->data)
            return Searching(temp->left,data);
        else
            return Searching(temp->right,data);
    }
public:
    BST(){
    root = NULL;
    }
    void Insert(int data)
    {
        node* temp = root;
        Insert(temp,data);
    }
    void Searching(int data)
    {
        node* temp = root;
        bool l = Searching(temp,data);
        if(l)
            cout<<"Found"<<endl;
        else
            cout<<"Not Found"<<endl;
    }
    node* Get_Root(){
        node* temp = root;
        return temp;
    }
};


void Inorder_Traversal(node* ptr){
    if(ptr!=NULL)
 {   Inorder_Traversal(ptr->left);

    cout<<ptr->data<<"  ";

    Inorder_Traversal(ptr->right);}
}

void PreOrder_Traversal(node* ptr){
    if(ptr!=NULL)
    {
        cout<<ptr->data<<"  ";
        PreOrder_Traversal(ptr->left);
        PreOrder_Traversal(ptr->right);
    }
}

void PostOrder_Traversal(node* ptr){
    if(ptr!=NULL)
    {
        PostOrder_Traversal(ptr->left);
        PostOrder_Traversal(ptr->right);
        cout<<ptr->data<<"  ";
    }
}

int main()
{
    BST a;
    int q;
    cout<<"How many elements you have to Enter into the BST ?"<<endl;
    cin>>q;
    int b;
    for(int i=0; i<q; i++)
    {
        cout<<"Enter the "<<i+1<<" Element"<<endl;
        cin>>b;
        a.Insert(b);
        cout<<"Element Inserted into the Tree"<<endl;
    }
    node* temp = a.Get_Root();
    cout<<"The Inorder Traversal is "<<endl;
    Inorder_Traversal(temp);
    cout<<endl;
    cout<<"The Preorder Traversal is "<<endl;
    PreOrder_Traversal(temp);
    cout<<endl;
    cout<<"The Postorder Traversal is "<<endl;
    PostOrder_Traversal(temp);
    cout<<endl;
    return 0;
}




