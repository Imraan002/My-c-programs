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
void bfs(node* root)
{
	if(root==NULL)
	{
		return;
	}
	queue<node*>qu;
	qu.push(root);
	qu.push(NULL);
	while(!qu.empty())
	{
		node* ele=qu.front();
		qu.pop();
		if(ele!=NULL)
		{
			cout<<ele->data<<" ";
			if(ele->left)
			{
				qu.push(ele->left);
			}
			if(ele->right)
			{
				qu.push(ele->right);
			}
		}
		else
		{
			if(!qu.empty())
			{
				qu.push(NULL);
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
bfs(root);
return 0;
}