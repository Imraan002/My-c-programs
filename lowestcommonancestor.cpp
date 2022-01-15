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
int lca(node* root,int d1,int d2)
{	if(root==NULL)
	return -1;
	
	if(root->data>d1 && root->data>d2)
	{
		return lca(root->left,d1,d2);
	
	}
	else if(root->data<d1 && root->data<d2)
	{
		return lca(root->right,d1,d1);
		
		}
		else
		return root->data;
															//BST
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = new node(40);
root->left=new node(30);
root->right=new node(50);
root->left->left=new node(20);
root->left->right=new node(35);
root->right->right=new node(55);
int res=lca(root,20,35);
cout<<res;
return 0;
}