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
void rightview(node* root)
{	if(root==NULL)
	{
		return;
	}
	queue<node*>qu;
	qu.push(root);
	while(!qu.empty())
	{
		int size=qu.size();
		for(int i=0;i<size;i++)
		{
			node* ele=qu.front();
			qu.pop();
			if(i==size-1)
			{
				cout<<ele->data<<" ";
			}
			if(ele->left)
			{
				qu.push(ele->left);
			}
			if(ele->right)
			{
				qu.push(ele->right);
			}
		}
	}
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
rightview(root);

return 0;
}