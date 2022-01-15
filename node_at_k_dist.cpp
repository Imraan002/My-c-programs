#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> mp;
vector<int> v;
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
void fill(node* root)
{
	if(root==NULL)
	{
		return;
	}
	if(root->left!=NULL)
	{
		mp[root->left->data]=root->data;
	}
	if(root->right!=NULL)
	{
		mp[root->right->data]=root->data;
	}
	fill(root->left);
	fill(root->right);
	return;
}
void node_at_k_dist(node* root,node* target,int k)
{
	set<int> visited;
	deque<node*> qu;
	qu.push_back(target);
	int n;
	while(!qu.empty())
	{	
	 n=qu.size();
	for(int i=1;i<=n;i++)
	{
		node* ele=qu.front();
		qu.pop_front();
		visited.insert(ele->data);
		if(ele->left!=NULL && visited.find(ele->left->data)==visited.end())
		{
			qu.push_back(ele->left);
		
		}
		if(ele->right!=NULL && visited.find(ele->right->data)==visited.end())
		{
			qu.push_back(ele->right);
		}
		if(mp[ele->data]!=0 && visited.find(mp[ele->data])==visited.end())
		{
			node* nwnode=new node(mp[ele->data]);
			qu.push_back(nwnode);
			
		}
		if(k==0)
		{	while(!qu.empty())
			{
				node* t=qu.front();
				qu.pop_front();
				v.push_back(t->data);
			}
			break;
		}

	}
		k--;
		
	}

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
fill(root);
mp.insert(make_pair(root->data,0));
node_at_k_dist(root,root->left,2);
for(auto ele:v)
{
	cout<<ele<<" ";
}
return 0;
}