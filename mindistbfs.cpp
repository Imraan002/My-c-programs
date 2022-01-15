#include <bits/stdc++.h>
using namespace std;
const int N=1e5;		//shortest distance in undirected graph using bfs
vector<int> vec[N];
queue<int> qu;
vector<int> dist(N,INT_MAX);								
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
	int u,v;
	cin>>u>>v;
	vec[u].push_back(v);
	vec[v].push_back(u);
}

dist[0]=0;
qu.push(0);
while(!qu.empty())
{
	int node=qu.front();
	qu.pop();
	for(auto it:vec[node])
	{
		if(dist[node]+1<dist[it])
		{
			dist[it]=dist[node]+1;
			qu.push(it);
		}
		
	}
}
for(int i=0;i<n;i++)
{
	cout<<i<<"->"<<dist[i]<<endl;
}
return 0;
}