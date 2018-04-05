#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* create(int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return newnode;
}

void inorder(struct node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	if(root->data!=0)
		cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	int n;
	cin>>n;
	
	string str;
	while(n--)
	{
		struct node* root=NULL;
		cin>>str;
		
		root=create(str[0]-'0');
		root->left=create(str[1]-'0');
		root->left->left=create(str[2]-'0');
		root->left->right=create(str[3]-'0');
		root->right=create(str[4]-'0');
		root->right->left=create(str[5]-'0');
		root->right->right=create(str[6]-'0');
		
		inorder(root);
	}
	return 0;
}
