#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<pair<int,int>> vec[N]; 
vector<int> dist(N,1e5);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int main()
{															//Dijkstra's Algorithm
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
	vec[v].push_back({u,wt});
}
int src;
cin>>src;
dist[src]=0;
pq.push({0,src});
while(!pq.empty())
{
	int srcdist=pq.top().first;
	int node=pq.top().second;
	pq.pop();
	for(auto it:vec[node])
	{
		if(it.second+srcdist<dist[it.first])
		{
			dist[it.first]=it.second+srcdist;
			pq.push({dist[it.first],it.first});
		}

	}
}
for(int i=0;i<n;i++)
{
	cout<<"distance from "<<src<<" to "<<i<<" "<<dist[i]<<endl;
}
return 0;
}