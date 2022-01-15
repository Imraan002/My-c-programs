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
void zigzag(node* root)
{
	if(root==NULL)
	{
		return;
	}
	stack<node*>curr;
	stack<node*>nxtlvl;
	bool LtoR=true;
	curr.push(root);
	while(!curr.empty())
	{
		node* temp=curr.top();
		curr.pop();
		cout<<temp->data<<" ";
		if(LtoR==true)
		{
			if(temp->left)
			{
				nxtlvl.push(temp->left);
			}
			if(temp->right)
			{
				nxtlvl.push(temp->right);
			}
		}
		else if(LtoR!=true)
		{
			if(temp->right)
			{
				nxtlvl.push(temp->right);
			}
			if(temp->left)
			{
				nxtlvl.push(temp->left);
			}
		}
		if(curr.empty())
	{
		LtoR=!LtoR;
		swap(curr,nxtlvl);
	}

	}
	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = new node(10);
root->left=new node(5);
root->right=new node(15);
root->left->left=new node(2);
root->left->right=new node(6);
root->right->left=new node(14);
root->right->right=new node(18);
zigzag(root);


return 0;
}