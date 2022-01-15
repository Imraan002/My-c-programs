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
	node* root;
	int size;
};
info* solve(node* root)
{	
	
	if(root==NULL)
	{
		info* kt=new info();
		kt->min=INT_MAX;
		kt->max=INT_MIN;
		kt->isBST=true;
		kt->root=NULL;
		kt->size=0;
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
	if(rt->isBST==true)
	{
		rt->root=root;
		rt->size=left->size+right->size+1;
	}
	else if(left->size > right->size)
	{
		rt->root=left->root;
		rt->size=left->size;
	}
	else
	{
		rt->root=right->root;
		rt->size=right->size;
	}
	return rt;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = new node(80);
root->left=new node(60);
root->right=new node(90);
root->left->left=new node(50);
root->left->right=new node(65);
root->left->left->left=new node(45);
root->left->left->right=new node(55);
info *ans=new info();
ans=solve(root);
cout<<ans->root->data<<endl;
cout<<ans->size<<endl;

return 0;
}