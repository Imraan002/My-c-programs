#include<bits/stdc++.h>
using namespace std;
#define ll long long 
map<int,int> mp;
struct tree{
	tree* right;
	tree* left;
	int data;
	tree(int val){
		this->right=NULL;
		this->left=NULL;
		this->data=val;
	}
};
tree* build_tree(int inorder[],int instrt,int inend,int postorder[],int poststrt,int postend)
{
	if(instrt>inend || poststrt>postend)
	{
		return NULL;
	}
	for(int i=0;i<5;i++)
	{
		mp[inorder[i]]=i;
	}
	tree* root=new tree(postorder[postend]);
	int idx=mp[postorder[postend]];
	int element=idx-instrt;

	root->left=build_tree(inorder,instrt,idx-1,postorder,poststrt,poststrt+element-1);
	root->right=build_tree(inorder,idx+1,inend,postorder,poststrt+element,postend-1);
	return root;
}
void tree_traversal(tree* root)
{
	if(root==NULL)
		return;
	cout<<root->data<<" ";
	tree_traversal(root->left);
	tree_traversal(root->right);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int inorder[]={3,2,4,1,5};
    int postorder[]={3,4,2,5,1};
    tree* root=build_tree(inorder,0,4,postorder,0,4);
    tree_traversal(root);
    return 0;
}