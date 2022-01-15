#include <bits/stdc++.h>
using namespace std;					//cycle detection using topological sort bfs directed graph
const int N=1e5;
vector<int> indegree(N,0);
queue<int> qu;
vector<int> vec[N];
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
vector<int> ans(n,0);
int cnt=0;
for(int i=0;i<n;i++)
{
	int u,v;
	cin>>u>>v;
	indegree[v]++;
	vec[u].push_back(v);
}
for(int i=0;i<n;i++)
{
	if(indegree[i]==0)
		qu.push(i);
}
while(!qu.empty())
{
	int node=qu.front();
	qu.pop();
	cnt++;
	for(auto it:vec[node])
	{
		indegree[it]--;
		if(indegree[it]==0)
		{
			qu.push(it);
		}
	}
}
if(cnt==n)
	cout<<"No cycle "<<endl;
else
	cout<<" Cycle is present "<<endl;
return 0;
}