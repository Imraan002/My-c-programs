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
bool identical(node* root1,node* root2)
{
	if(root1 == NULL && root2 == NULL)
	{
		return true;
			}
	if( (root1 == NULL && root2 != NULL) || (root1 != NULL && root2 == NULL))
	{
		return false;
	}		
		if(root1->data==root2->data)
	{	
		bool left=identical(root1->left,root2->left);
		bool right=identical(root2->right,root2->right);	
		return left&&right;
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
node* root1 = new node(1);
root1->left=new node(2);
root1->right=new node(3);
node* root2 = new node(1);
root2->left=new node(2);
root2->right=new node(3);
bool res=identical(root1,root2);
if(res)
cout<<"Identical BST";
else
cout<<"Not Identical BST";

return 0;
}