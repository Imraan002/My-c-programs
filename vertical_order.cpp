#include <bits/stdc++.h>
using namespace std;
map<int,vector<int>> mp;
struct node
{
	int val;
	node* left;
	node* right;
	node(int key)
	{
		val=key;
		left=NULL;
		right=NULL;
	}
};
void verticalorder(node* root,int hd)
{
	if(root==NULL)
	{
		return;
	}
	mp[hd].push_back(root->val);
	verticalorder(root->left,hd-1);
	verticalorder(root->right,hd+1);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	node* root=new node(10);
	root->left=new node(7);
	root->left->left=new node(3);
	root->left->right=new node(11);
	root->right=new node(4);
	root->right->left=new node(14);
	root->right->right=new node(6);
	int hd=0;
	verticalorder(root,hd);

	for(auto it=mp.begin();it!=mp.end();it++)
	{
		for(auto i=0;i<(it->second).size();i++)
		{
			cout<<(it->second)[i]<<" ";
		}
		cout<<"\n";
	}
return 0;
}