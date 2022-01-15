#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<pair<int,int>> vec[N];
int parent[N];
int dist[N];
bool mst[N]; 
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++)
{
	int u,v,wt;
	cin>>u>>v>>wt;
	vec[u].push_back({v,wt});
	vec[v].push_back({u,wt});					//prims algo brute force
}
for(int i=0;i<n;i++)
{
	parent[i]=-1;
	mst[i]=false;
	dist[i]=INT_MAX;
}
dist[0]=0;
for(int i=0;i<n-1;i++)
{
	int mini=INT_MAX;
	int node;
	for(int i=0;i<n;i++)
	{
		if(dist[i]<mini && mst[i]==false)
		{
			mini=dist[i];
			node=i;
		}
	}
	mst[node]=true;
	for(auto it:vec[node])
	{
		if(mst[it.first]==false && it.second<dist[it.first])
		{
			dist[it.first]=it.second;
			parent[it.first]=node;
		}
	}
}
for(int i=1;i<n;i++)
{
	cout<<parent[i]<<"->"<<i<<endl;
}

return 0;
}