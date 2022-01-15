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
node* lca(node* root,int n1,int n2)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data==n1 || root->data==n2)
	{
		return root;
	}
	node* left=lca(root->left,n1,n2);
	node* right=lca(root->right,n1,n2);
	if(left!=NULL && right!=NULL)
	{
		return root;
	}
	if(left==NULL && right==NULL)
	{
		return NULL;
	}
	if(left!=NULL)
	{
		return root->left;
	}
	return root->right;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

node* root = new node(40);
root->left=new node(30);
root->right=new node(10);
root->left->left=new node(20);
root->left->right=new node(15);
root->right->right=new node(11);
node* res=lca(root,15,10);
if(res)
	cout<<res->data<<endl;
else
cout<<"no lca found"<<endl;
return 0;
}