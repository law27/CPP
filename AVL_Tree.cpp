#include<iostream>
using namespace std;

struct node
{
	int data;
	node* right;
	node* left;
	int height;
};

int height(node* temp)
{
	return (temp == NULL) ? 1 : (temp->height);
}

class AVL
{
	node* root;
	node* Left_rotate(node* temp)
	{
		node* x = temp->right;
		node* y = x->left;

		x->left = temp;
		temp->right = y;

		x->height = 1 + ((height(x->right) > height(x->left)) ? height(x->right) : height(x->left));
		temp->height = 1 + ((height(temp->right) > height(temp->left)) ? height(temp->right) : height(temp->left));
		return x;
	}
	node* Right_rotate(node* temp)
	{
		node* x = temp->left;
		node* y = x->right;

		x->right = temp;
		temp->left = y;

		x->height = 1 + ((height(x->right) > height(x->left)) ? height(x->right) : height(x->left));
		temp->height = 1 + ((height(temp->right) > height(temp->left)) ? height(temp->right) : height(temp->left));
		return x;
	}
	static node* New_Node(int data)
	{
		node* temp = new node();
		temp->right = NULL;
		temp->left = NULL;
		temp->data = data;
		temp->height = 1;
		return temp;
	}
	node* left_Case(node* temp,int data)
	{
		if (data < temp->left->data) {
			node* After_Rotation =  Right_rotate(temp);
			return After_Rotation;
		}
		else
		{
			temp->left = Left_rotate(temp->left);
			node* After_Rotation =  Right_rotate(temp);
			return After_Rotation;
		}
	}
	node* Right_Case(node* temp, int data)
	{
		if (data > temp->right->data) {
			node* After_Rotation =  Left_rotate(temp);
			return After_Rotation;
		}
		else
		{
			temp->right = Right_rotate(temp->right);
			node* After_Rotation =  Left_rotate(temp);
			return After_Rotation;
		}
	}
	node* Create_Node(int data,node* temp)
	{
		if (temp == NULL)
			temp = New_Node(data);
		else if (data > temp->data)
			temp->right = Create_Node(data, temp->right);
		else
			temp->left = Create_Node(data, temp->left);

		temp->height = 1 + ((height(temp->right) > height(temp->left)) ? height(temp->right) : height(temp->left));

		int Balance_Factor = ((temp == NULL) ? 0 : height(temp->left) - height(temp->right));

		if (Balance_Factor > 1) {
			node* Changed_root =  left_Case(temp, data);
			return Changed_root;
		}
		if (Balance_Factor < -1) {
			node* Changed_root =  Right_Case(temp, data);
			return Changed_root;
		}

		return temp;
	}
public:
	AVL() { root = NULL; }
	void Create_Node(int data)
	{
		root = Create_Node(data, root);
	}
	node* get_Root()
	{
		return root;
	}
};

void PreOrder(node* temp)
{
	if(temp!=NULL)
	{
		cout << temp->data << "  ";
		PreOrder(temp->left);
		PreOrder(temp->right);
	}
}

int main()
{
	AVL obj;
	obj.Create_Node(10);
	obj.Create_Node(20);
	obj.Create_Node(30);
	obj.Create_Node(40);
	obj.Create_Node(50);
	obj.Create_Node(25);
	node* root = obj.get_Root();
	PreOrder(root);
	return 0;
}