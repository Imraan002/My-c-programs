#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> vis(N,0);
stack<int> st;
vector<int> vec[N];
void topological(int node)
{
	vis[node]=1;
	for(auto it:vec[node])
	{
		if(!vis[it])
		{
			topological(it);
		}
	}
	st.push(node);
}
int main()
{														//topological sort suing dfs in DAG
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
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
		if(!vis[i])
			topological(i);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
return 0;
}