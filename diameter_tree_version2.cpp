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
int diameter(node* root,int* height)
{
	if(root==NULL)
	{
		return 0;
	}
	int lh=0;
	int rh=0;
	int leftdiameter=diameter(root->left,&lh);
	int rightdiameter=diameter(root->right,&rh);
	*height=max(lh,rh)+1;
	int curr=lh+rh+1;
	return max(curr,max(leftdiameter,rightdiameter));
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
int height=0;
cout<<diameter(root,&height);

return 0;
}