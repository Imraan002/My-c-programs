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
tree* build_tree(int inorder[],int instrt,int inend,int preorder[],int prestrt,int preend)
{
	if(instrt>inend || prestrt>preend)
	{
		return NULL;
	}
	for(int i=0;i<5;i++)
	{
		mp[inorder[i]]=i;
	}
	tree* root=new tree(preorder[prestrt]);
	int idx=mp[preorder[prestrt]];
	int element=idx-instrt;

	root->left=build_tree(inorder,instrt,idx-1,preorder,prestrt+1,prestrt+element);
	root->right=build_tree(inorder,idx+1,inend,preorder,prestrt+1+element,preend);
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
    int preorder[]={1,2,3,4,5};
    tree* root=build_tree(inorder,0,4,preorder,0,4);
    tree_traversal(root);
    return 0;
}