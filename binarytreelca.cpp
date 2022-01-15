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
vector<int>nodetoroot(node* root,int val)
{
	vector<int>li;
	if(root==NULL)
	{
		return li;
	}
	if(root->data==val)
	{
		li.push_back(val);
		return li;
	}
	
		vector<int>ll=nodetoroot(root->left,val);
		if(ll.size()>0)
		{
			ll.push_back(root->data);
			return ll;
		}
	
	if(ll.size()==0)
	{	vector<int>rl=nodetoroot(root->right,val);
		if(rl.size()>0)
		{
			rl.push_back(root->data);
			return rl;
		}
	}
	return li;
}
int lca(node* root,int d1,int d2)
{
	vector<int>l1=nodetoroot(root,d1);
	vector<int>l2=nodetoroot(root,d2);
	int i=l1.size()-1;
	int j=l2.size()-1;
	while(i>=0 && j>=0 && l1[i]==l2[j])
	{
		j--;
		i--;
	}
	i++;
	j++;
	return l1[i];
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
cout<<lca(root,15,10);

return 0;
}