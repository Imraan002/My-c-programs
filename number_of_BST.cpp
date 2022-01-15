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
vector<node*> number_BST(int strt,int end)
{
	vector<node*> trees;
	if(strt>end)
	{
		trees.push_back(NULL);
		return trees;
	}
	for(int i=strt;i<=end;i++)
	{
		vector<node*> lefttree=number_BST(strt,i-1);
		vector<node*> righttree=number_BST(i+1,end);
		for(int j=0;j<lefttree.size();j++)
		{		node* left=lefttree[j];
			for(int k=0;k<righttree.size();k++)
			{
				node* right=righttree[k];
				node* nwnode=new node(i);
				nwnode->left=left;
				nwnode->right=right;
				trees.push_back(nwnode);
				
			}
		}
	}
	return trees;
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
vector<node*> res=number_BST(1,3);
for(int i=0;i<res.size();i++)
{
	disp(res[i]);
}

return 0;
}