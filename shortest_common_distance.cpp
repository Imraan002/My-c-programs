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
int dist(node* root,int val,int d)
{
	if(root==NULL)
	{
		return -1;
	}
	if(root->data==val)
	{
		return d;
	}
	int left=dist(root->left,val,d+1);
	if(left!=-1)
	{
		return left;
	}
	return dist(root->right,val,d+1);
}
int shortestdist(node* root,int n1,int n2)
{
	node* curr=lca(root,n1,n2);
	int d1=dist(curr,n1,0);
	int d2=dist(curr,n2,0);
	return d1+d2;
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
int res=shortestdist(root,15,11);
cout<<res<<endl;

return 0;
}