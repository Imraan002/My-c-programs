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
int height(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	return max(height(root->left),height(root->right))+1;
}
int diameter(node* root)
{
	if(root==NULL)
	{
		return 0;
	}
	int left=height(root->left);
	int right=height(root->right);
	int leftdiameter=diameter(root->left);
	int rightdiameter=diameter(root->right);
	return max(left+right+1,max(leftdiameter,rightdiameter));
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
cout<<diameter(root);

return 0;
}