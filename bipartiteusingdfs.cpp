#include <bits/stdc++.h>
using namespace std;
bool bipartite(int node,int clr,vector<vector<int>> & vec,vector<int> color)
{
	color[node]=clr;;
	for(auto it:vec[node])
	{
		if(color[it]==-1)
		{
			return bipartite(it,1-clr,vec,color);
		}
		else
		{
			 if(color[it]==color[node])
			return false;
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
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	vec[y].push_back(x);
}
vector<int> color(n,-1);
bool ans=true;
for(int i=0;i<n;i++)
{
	if(color[i]==-1)
	{
		if(bipartite(i,1,vec,color)==false)
		{
			ans=false;
			break;
		}
	}
	
}
if(ans==true)
cout<<"Bipartite";
else
	cout<<"Not Bipartite";
return 0;
}