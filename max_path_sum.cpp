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
int max_path_sum(node* root,int &res)
{
	if(root==NULL)
	{
		return 0;
	}
	int lsum=max_path_sum(root->left,res);
	int rsum=max_path_sum(root->right,res);
	int temp=max(max(lsum,rsum)+root->data,root->data);
	int ans=max(temp,lsum+rsum+root->data);
	res=max(res,ans);
	return temp;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root = new node(40);
root->left=new node(30);
root->right=new node(-10);
root->left->left=new node(20);
root->left->right=new node(15);
root->right->right=new node(-11);
int res=INT_MIN;
int k=max_path_sum(root,res);
cout<<res;

return 0;
}