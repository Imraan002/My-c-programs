#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
bool bipartite(int src,int clr,vector<int> &color,vector<vector<int>> &vec)
{
	queue<int>qu;
	qu.push(src);
	color[src]=clr;
	while(!qu.empty())
	{
		int node=qu.front();
		qu.pop();
		for(auto ele:vec[node])
		{
			if(color[ele]==-1)
			{
				color[ele]=!clr;
				qu.push(ele);				//bfs

			}
			else
			{
				if(color[ele]==color[node])
					return false;
			}
		}
	}
	return true;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
vector<vector<int>> vec(n);
vector<int> color(n,-1);
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	vec[y].push_back(x);
}
bool ans=false;
for(int i=0;i<n;i++)
{
	if(color[i]==-1)
	{
		if(bipartite(i,0,color,vec))
		{
			ans=true;
			break;
		}
	}
}
if(ans==true)
cout<<"Bipartite"<<endl;
else
cout<<"Not bipartite"<<endl;
return 0;
}