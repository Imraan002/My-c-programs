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
struct info{
	int size;
	int min;
	int max;
	int ans;
	bool isBST;
};
info isBST(node* root)
{
	if(root==NULL)
	{
		return {0,INT_MAX,INT_MIN,0,true};
	}
	if(root->left==NULL && root->right==NULL)
	{
		return {1,root->data,root->data,1,true};
	}
	info left=isBST(root->left);
	info right=isBST(root->right);
	info curr;
	curr.size=(1+left.size+right.size);
	if(left.isBST==true && right.isBST==true && left.max<root->data && right.min>root->data)
	{
		curr.min=min(left.min,min(right.min,root->data));
		curr.max=max(left.max,max(right.max,root->data));
		curr.ans=curr.size;
		curr.isBST=true;
		return curr;
	}
	curr.ans=max(left.ans,right.ans);
	curr.isBST=false;
	return curr;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		node* root=new node(15);
		root->left=new node(10);
		root->right=new node(30);
		root->left->left=new node(5);

		
		cout<<isBST(root).ans;


return 0;
}