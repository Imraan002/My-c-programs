#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> vec;
vector<bool> vis;
vector<int> cmpnts;
int get_size(int src)
{
	if(vis[src])
	{
		return 0;
	}
	vis[src]=true;
	int ans=1;
	for(auto ele:vec[src])
	{
		if(!vis[ele])
		{
			
			ans+=get_size(ele);
			vis[ele]=true;
		}
	}
	return ans;
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
	for(int i=0;i<m;i++)
	{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(!vis[i])
		{
          cmpnts.push_back(get_size(i));
           
		}
	}
	for(auto ele:cmpnts)
	{
		cout<<ele<<" ";
	}
return 0;
}