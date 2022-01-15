#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
vector<int> vis(N,0);
bool cycle(int src,vector<vector<int>> &vec)
{
	queue<pair<int,int>> qu;
	qu.push({src,-1});
	vis[src]=1;
	while(!qu.empty())
	{
		int node=qu.front().first;
		int par=qu.front().second;
		qu.pop();
		for(auto k:vec[node])
		{
			if(!vis[k])
			{
				qu.push({k,node});
				vis[k]=1;
			}
			else{
				if(par!=k)
					return true;
			}
		}
	}
	return false;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
vector<vector<int>> vec(n+1);
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	
}
bool res=false;
for(int i=1;i<=n;i++)
{
	if(!vis[i])
	{
		if(cycle(i,vec))
		{
			res=true;
			break;
		}
	}
}
if(res==true)
cout<<"Cycle is present"<<endl;
else
cout<<"cycle is not present";
return 0;
}