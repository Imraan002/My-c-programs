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
void flat(node* root)
{
	if(root==NULL || (root->left==NULL && root->right==NULL))
	{
		return;
	}
	
	if(root->left!=NULL)
	{	flat(root->left);
		node* temp=root->right;
		root->right=root->left;
		root->left=NULL;
		node* t=root->right;
		while(t->right!=NULL)
		{
			t=t->right;
		}
		t->right=temp;
	}
	flat(root->right);
}
void disp(node* root)
{	if(root==NULL)
	{
		return;
	}
	cout<<root->data<<" ";
	disp(root->left);
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
cout<<"\n";
flat(root);
disp(root);


return 0;
}