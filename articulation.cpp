#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> vec[N];
vector<bool> vis(N,false);
vector<int> tin(N,-1);
vector<int> low(N,-1);
vector<int> is_articulation(N);
static int timer=0;
void dfs(int node,int par)
{
	vis[node]=true;
	low[node]=tin[node]=timer++;
	int child=0;
	for(auto it:vec[node])
	{
		if(it==par)
			continue;
		if(!vis[it])
		{
			dfs(it,node);
			low[node]=min(low[node],low[it]);
			child++;
			if(low[it]>=tin[node] && par!=-1)
			{
				is_articulation[node]=1;
			}
		}
		else
		{
			low[node]=min(low[node],tin[it]);
		}
	}
	if(child>1 && par==-1)
	{
		is_articulation[node]=1;
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
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	vec[y].push_back(x);
}
for(int i=0;i<n;i++)
{
	if(!vis[i])
	{
		dfs(i,-1);
	}
}
for(int i=0;i<n;i++)
{
	if(is_articulation[i]==1)
		cout<<i<<" ";
}
return 0;
}