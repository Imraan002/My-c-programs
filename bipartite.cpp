#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vec;
vector<bool> vis;
vector<int> colarr;
bool bipartite=true;
void color(int src,int col)
{
	if(colarr[src]!=-1 && colarr[src]!=col)
	{
          bipartite = false;
          return;
	}
	colarr[src]=col;
	if(vis[src])
		return;
	if(!vis[src])
		vis[src]=true;
	for(auto ele:vec[src])
	{
		color(ele,!col);
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
	vec = vector<vector<int>>(n);
	vis = vector<bool>(n);
	colarr = vector<int>(n,-1);
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
			color(i,0);
	}
	if(bipartite)
		{
			cout<<"Bipartite";
		}
		else
			cout<<"Not Bipartite";
return 0;
}