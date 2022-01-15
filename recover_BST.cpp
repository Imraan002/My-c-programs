#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}

};
void disp(node* root)
{	if(root==NULL)
	{
		return;
	}
	disp(root->left);
	cout<<root->data<<" ";
	disp(root->right);
}
void recover_BST(node* root,node* &prev,node* &last,node* &first)
{
	if(root==NULL)
	{
		return;
	}
	recover_BST(root->left,prev,last,first);
	if(prev->data>root->data)
	{
		if(first==NULL)
		{
			first=prev;
		}
		last=root;
		
	}
	prev=root;
	recover_BST(root->right,prev,last,first);
	return;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = new node(40);
root->left=new node(50);
root->right=new node(30);
root->left->left=new node(20);
root->left->right=new node(35);
root->right->right=new node(60);
disp(root);
cout<<"\n";
node* prev=new node(INT_MIN);
node* first=NULL;
node* last=NULL;
recover_BST(root,prev,last,first);
if(first!=NULL && last!=NULL)
{
	swap(first->data,last->data);
}
disp(root);
return 0;
}