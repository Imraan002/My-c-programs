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
int Ndcnt(node* root)
{	if(root==NULL)
	return 0;				//No of Nodes
	else
	return Ndcnt(root->left)+Ndcnt(root->right)+1;
}
int Ndsum(node* root)
{	if(root==NULL)
	return 0;				//sum of Nodes
	else
	return Ndsum(root->left)+Ndsum(root->right)+root->data;
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
cout<<"\n";
cout<<Ndcnt(root);
cout<<"\n";
cout<<Ndsum(root);

return 0;
}