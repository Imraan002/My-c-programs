#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int tin[N];
int low[N];
bool vis[N];
vector<int> vec[N];
int timer=0;
void dfs(int node,int par)
{
	vis[node]=true;
	tin[node]=low[node]=timer++;
	for(auto it:vec[node] )							//bridges in a graph
	{
		if(it==par)
			continue;
		if(!vis[it])
		{
			dfs(it,node);
			low[node]=min(low[node],low[it]);
			if(low[it]>tin[node])
			{
				cout<<node<<"->"<<it<<endl;
			}
		}
		else
		{
			low[node]=min(low[node],tin[it]);
		}
	}
}
int main()
{
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
	vec[v].push_back(u);
}
for(int i=0;i<n;i++)
{
	if(vis[i]==false)
	{
		dfs(i,-1);
	}
}
return 0;
}