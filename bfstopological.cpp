#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> vec[N];
queue<int> qu;
vector<int> indegree(N,0);
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
	indegree[v]++;
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
	cout<<node<<" ";
	for(auto it:vec[node])
	{
		indegree[it]--;
		if(indegree[it]==0)
			qu.push(it);
	}
}
return 0;
}