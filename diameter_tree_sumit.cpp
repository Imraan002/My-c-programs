#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct node{
		public:
		int val;
		node* left;
		node* right;
		node(int x){
			this->val=x;
			left=NULL;
			right=NULL;
		}
};
struct diapair{
	public:
	int height;
	int diameter;
};
diapair find_dia(node* root)
{
	if(root==NULL)
		{
			diapair base;
			base.height=-1;
			base.diameter=0;
			return base;
		}
	diapair left=find_dia(root->left);
	diapair right=find_dia(root->right);
	diapair mydia;
	mydia.height=max(left.height,right.height)+1;
	mydia.diameter=max({left.diameter,right.diameter,left.height+right.height+2});
	return mydia;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    node* root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    diapair ans=find_dia(root);
    cout<<ans.diameter;
    return 0;
}