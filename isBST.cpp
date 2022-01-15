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
	int min;
	int max;
	bool isBST;
};
info* solve(node* root)
{	
	
	if(root==NULL)
	{
		info* kt=new info();
		kt->min=INT_MAX;
		kt->max=INT_MIN;
		kt->isBST=true;
		return kt;
	}
	info* rt=new info();
	info* left=solve(root->left);
	info* right=solve(root->right);
	if(left->isBST==true && right->isBST==true && root->data>left->max&& root->data<right->min)
	{
		rt->isBST=true;
	}
	else
	{
		rt->isBST=false;
	}
	rt->min=min(root->data,min(left->min,right->min));
	rt->max=max(root->data,max(left->max,right->max));
	return rt;
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
info *ans=new info();
ans=solve(root);
if(ans->isBST==1)
	cout<<"is BST";
else
	cout<<"Not BST";
return 0;
}