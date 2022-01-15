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
node* BST(node* root,int val)
{
	if(root==NULL)
	{
		node* nwnode = new node(val);
		return nwnode;
		
	}
	if(val<root->data)
	{
		root->left=BST(root->left,val);
	}
	if(val>root->data)
	{
		root->right=BST(root->right,val);
	}
	return root;
}
void disp(node* root)
{	if(root==NULL)
	{
		return;
	}
	disp(root->left);
	cout<<root->data<<" ";
	disp(root->right);
}
node* search(node* root,int val)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==val)
	{
		return root;
	}
	if(val<root->data)
		return search(root->left,val);
	if(val>root->data)
		return search(root->right,val);

return root;	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = NULL;

 root=BST(root,10);
 root=BST(root,5);
 root=BST(root,15);
 root=BST(root,3);
 root=BST(root,9);
 root=BST(root,7);
// disp(root);
 node* res=search(root,7);
 if(res!=NULL)
 {
 	cout<<"Present in BST";
 }
 else
 {
 	cout<<"Not present in BST";
 }
return 0;
}