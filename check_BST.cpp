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
bool check_BST(node* root,node* min,node* max)
{
	if(root==NULL)
	{
		return false;
	}
	if(min!=NULL && root->data<=min->data)
		{
			return false;
		}
	if(max!=NULL && root->data>=max->data)
	{
		return false;
	}
		bool left=check_BST(root->left,min,root);
	
		bool right=check_BST(root->right,root,max);
	
	return left and right;
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
 node* root2= new node(5);
 root2->left=new node(6);
 root->right=new node(1);
bool res=check_BST(root2,NULL,NULL);
if(res)
cout<<"BST";
else
cout<<"NOT BST";
return 0;
}