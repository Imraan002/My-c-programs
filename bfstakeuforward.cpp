#include <bits/stdc++.h>
using namespace std;
#define N 100000
vector<int> vec[N];
int vis[N];
void bfs(int src)
{
	queue<int>qu;
	qu.push(src);
	vis[src]=1;
	while(!qu.empty())
	{
		int ele=qu.front();
		qu.pop();
		cout<<ele<<" ";
		for(auto k:vec[src])
		{
			if(!vis[k])
			{
				qu.push(k);
				vis[k]=1;
			}
		}
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,m;
	cin>>n>>m;
	for(int i=0;i<N;i++)
	{
		vis[i]=0;
	}
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	for(int i=1;i<n+1;i++)
	{
		if(!vis[i])
		{
			bfs(i);
		}
	}
return 0;
}