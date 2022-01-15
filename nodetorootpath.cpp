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
list<int>nodetoroot(node* root,int val)
{
	list<int>li;
	if(root==NULL)
	{
		return li;
	}
	if(root->data==val)
	{
		li.push_back(val);
		return li;
	}
	
		list<int>ll=nodetoroot(root->left,val);
		if(ll.size()>0)
		{
			ll.push_back(root->data);
			return ll;
		}
	
	if(ll.size()==0)
	{	list<int>rl=nodetoroot(root->right,val);
		if(rl.size()>0)
		{
			rl.push_back(root->data);
			return rl;
		}
	}
	return li;
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
list<int>li=nodetoroot(root,11);
for(auto ele:li)
{
	cout<<ele<<" ";
}
return 0;
}