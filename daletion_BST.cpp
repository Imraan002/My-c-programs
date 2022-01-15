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
int leftmax(node* root)
{
	if(root->right!=NULL)
	{
		return leftmax(root->right);
	}
	else
	{
		return root->data;
	}

}
node* remove(node* root,int val)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data>val)
	{
		root->left=remove(root->left,val);
	}
	else if(root->data<val)
	{
		root->right=remove(root->right,val);
	}
	else
	{
		if(root->left!=NULL && root->right!=NULL)
		{
			int lmax=leftmax(root->left);
			root->data=lmax;
			root->left=remove(root->left,lmax);
			return root;
		}
		else if(root->left!=NULL)
		{
			return root->left;
		}
		else if (root->right!=NULL)
		{
				return root->right;
		}
		else
		{
			return NULL;
		}
	}

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
 disp(root);
 cout<<endl;
 remove(root,5);
 disp(root);
return 0;
}