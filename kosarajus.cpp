#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> vec[N];
stack<int> st;
vector<bool> vis(N,false);
vector<int> transpose[N];
void dfs(int node)
{
	vis[node]=true;
	for(auto it:vec[node])
	{
		if(!vis[it])
		{
			dfs(it);
		}
	}
	st.push(node);
}
void second_dfs(int node)
{
	vis[node]=true;
	cout<<node<<" ";
	for(auto it:transpose[node])
	{
		if(!vis[it])
		{
			second_dfs(it);
		}
	}
}
int main()
{														//kosarajus algo for strongly connected componnents
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);

	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		vec[u].push_back(v);
	}
	for(int i=0;i<n;i++)
	{
		if(!vis[i])						//inserting nodes in the set
		{
			dfs(i);
		}
	}
	for(int i=0;i<n;i++)
	{
		vis[i]=false;
		for(auto it:vec[i])
		{										//reversing the links
			transpose[it].push_back(i);
		}
	}
	while(!st.empty())
	{
		int node=st.top();
		st.pop();
			if(!vis[node])
			{
				second_dfs(node);
				cout<<endl;
			}
	}
	
return 0;
}