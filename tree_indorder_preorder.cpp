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
int search(int inorder[],int cur,int strt,int end)
{
	for(int i=strt;i<=end;i++)
	{
		if(inorder[i]==cur)
		{	return i;
			break;
		}
	}
	return -1;
}
node* buildtree(int preorder[],int inorder[],int strt,int end)
{	if(strt>end)
	{
		return NULL;
	}
	static int idx=0;
	int cur=preorder[idx];
	node* nwnode=new node(cur);
	idx++;
	int pos=search(inorder,cur,strt,end);
	if(strt==end)
	{
		return nwnode;
	}

	nwnode->left=buildtree(preorder,inorder,strt,pos-1);
	nwnode->right=buildtree(preorder,inorder,pos+1,end);
	return nwnode;
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

int main()						//buil tree from inorder and preorder
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int preorder[]={40,30,20,15,10,11};
int inorder[]={20,30,15,40,10,11};
node* root=buildtree(preorder,inorder,0,5);
disp(root);

return 0;
}