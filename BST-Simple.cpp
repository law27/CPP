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
        if(root==NULL)
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
    }
};

int main()
{
    
}


