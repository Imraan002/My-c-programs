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
void sumreplace(node* root)
{	if(root==NULL)
	{
		return;
	}
	sumreplace(root->left);
	sumreplace(root->right);
	if(root->left!=NULL)
	{
		root->data=root->data+root->left->data;
	}
		if(root->right!=NULL)
	{
		root->data=root->data+root->right->data;
	}
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
node* root = new node(40);
root->left=new node(30);
root->right=new node(10);
root->left->left=new node(20);
root->left->right=new node(15);
root->right->right=new node(11);
disp(root);
cout<<endl;
sumreplace(root);
disp(root);
return 0;
}