#include<iostream>
using namespace std;

struct node
{
    int data;
    node* right;
    node* left;
};

class BST
{
private:
    node* root = new node();

    node* New_Node(int data)
    {
        node* temp = new node();
        temp->data = data;
        temp->right = NULL;
        temp->left = NULL;
        return temp;
    }

    node* Insert(int data,node* ptr)
    {
        if(ptr==NULL && root==NULL)
        {
            root = New_Node(data);
        }
        if(ptr==NULL)
        {
            ptr = New_Node(data);
        }
        else if(data > ptr->data)
        {
            ptr->right = Insert(data, ptr->right);
        }
        else
        {
            ptr->left = Insert(data, ptr->left);
        }
        return ptr;
    }
    string Searching(int data,node* ptr)
    {
        if (ptr == NULL)
            return "NOT FOUND";
        if (ptr->data == data)
            return "FOUND";
        else if (data > ptr->data)
            return Searching(data, ptr->right);
        else
            return Searching(data, ptr->left);
    }

    void In_Order_traversal(node* ptr)
    {
        if(ptr!=NULL)
        {
            In_Order_traversal(ptr->left);
            cout << ptr->data << "  ";
            In_Order_traversal(ptr->right);
        }
    }
    void Post_Order_traversal(node* ptr)
    {
        if (ptr != NULL)
        {
            cout << ptr->data << "  ";
            Post_Order_traversal(ptr->left);
            Post_Order_traversal(ptr->right);
        }
    }
    void Pre_Order_traversal(node* ptr)
    {
        if (ptr != NULL)
        {
            Post_Order_traversal(ptr->left);
            Post_Order_traversal(ptr->right);
            cout << ptr->data << "  ";
        }
    }
    
public:
    BST()
    {
        root = NULL;
    }
    void Insert(int data)
    {
        node* temp = root;
        Insert(data, temp);
    }
    void Searching(int data)
    {
        cout << Searching(data, root) << endl;
    }
    void In_Order_Traversal()
    {
        In_Order_traversal(root);
    }
    void Post_Order_traversal()
    {
        Post_Order_traversal(root);
    }
    void Pre_Order_traversal()
    {
        Pre_Order_traversal(root);
    }
};

int main()
{
    BST a;
    cout << "How many nodes you have to Enter in the BST?" << endl;
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        int number;
        cin >> number;
        a.Insert(number);
        cout << "Element is added to the Linked_list" << endl;
    }
    while(true)
    {
        cout << "Enter the Element you have to Search is BST" << endl;
        int num;
        cin >> num;
        a.Searching(num);
        if (num == 0)
            break;
    }
    cout<<"In-Order Traversal"<<endl;
    a.In_Order_Traversal();
    cout << endl;
    cout << "Post-Order Traversal" << endl;
    a.Post_Order_traversal();
    cout << endl;
    cout << "Pre-Order Traversal" << endl;
    a.Pre_Order_traversal();
    return 0;
}




































