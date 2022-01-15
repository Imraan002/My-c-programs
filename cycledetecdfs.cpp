#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<vector<int>> vec(N);
vector<int> vis(N,0);
bool dfs(int src,int par)
{
	vis[src]=1;
	for(auto ele:vec[src])
		{
			if(!vis[ele])
			{
				if(dfs(ele,src))
					return true;
			}
			else if(par!=ele)
			{
				return true;
			}
		}
		return false;
}
int main()												//cycle detection using dfs undirected graph
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,m;	
	cin>>n>>m;
	bool ans=false;
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
			if(dfs(i,-1))
			{
				ans=true;
				break;
			}
			}
			
		}
				
	if(ans==true)
	cout<<"Cycle is present"<<endl;
	else
	cout<<"Cycle is not present"<<endl;						
return 0;
}