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
node* build_BST(int preorder[],int* preidx,int key,int min,int max,int n)
{
	if(*preidx>=n)
	{
		return NULL;
	}
	node* root=NULL;
	if(key>min && key<max)
	{
		root=new node(key);
		(*preidx)++;
		if(*preidx<n)
			root->left=build_BST(preorder,preidx,preorder[*preidx],min,key,n);
		if(*preidx<n)
			root->right=build_BST(preorder,preidx,preorder[*preidx],key,max,n);
	}
	
	return root;
}
void disp(node* root)
{
	if(root==NULL)
	{
		return;
	}
	disp(root->left);
	cout<<root->data<<" ";
	disp(root->right);
	return;

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int preorder[]={10,5,3,9,7,15};
int preidx=0;
int n=6;
node* root=build_BST(preorder,&preidx,preorder[0],INT_MIN,INT_MAX,n);
disp(root);
return 0;
}