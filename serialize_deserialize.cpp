#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct tree
{
    int data;
    tree *left;
    tree *right;
    tree(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
string serialize(tree* root)
{
	string str=" ";
	if(root==NULL)
		return str;
	queue<tree*> qu;
	qu.push(root);
	while(!qu.empty()){
		tree* node=qu.front();
		qu.pop();
		if(node==NULL)
		{
			str.append("#,");
		}
		else{
			str.append(to_string(node->data));
			str.append(",");
		}
		if(node!=NULL)
		{
			qu.push(node->left);
			qu.push(node->right);
		}
	}
	return str;
}
tree* deserialize(string str)
{
	if(str.empty()==true)
		return NULL;
	stringstream s(str);
	string temp;
	getline(s,temp,',');
	tree* root=new tree(stoi(temp));
	queue<tree*> qu;
	qu.push(root);
	while(!qu.empty())
	{
		auto node=qu.front();
		qu.pop();
		getline(s,temp,',');
		if(temp=="#")
		{
			node->left=NULL;
			
		}
		else{
			tree* leftnode=new tree(stoi(temp));
			node->left=leftnode;
			qu.push(leftnode);
		}
		getline(s,temp,',');
		if(temp=="#")
		{
			node->right=NULL;
		}
		else{
			tree* rightnode=new tree(stoi(temp));
			node->right=rightnode;
			qu.push(rightnode);
		}
	}
	return root;
}
void traverse(tree* root)
{
	if(root==NULL)
		return ;
	cout<<root->data<<" ";
	traverse(root->left);
	traverse(root->right);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    tree *root = new tree(1);
    root->left = new tree(2);
    root->right = new tree(13);
    root->right->left=new tree(4);
    root->right->right=new tree(5);
    string str=serialize(root);
    tree* root2=deserialize(str);
    traverse(root2);
    return 0;
}