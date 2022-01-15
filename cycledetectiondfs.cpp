#include <bits/stdc++.h>
using namespace std;
bool checkcycle(int node,vector<int> vec[],vector<int> &dfsvis,vector<int> &vis)
{
	vis[node]=1;
	dfsvis[node]=1;
	for(auto it:vec[node])
	{
		if(!vis[it])
		{
			if(checkcycle(it,vec,dfsvis,vis))
				return true;
		}
		else if(dfsvis[it])
		{
			return true;
		}
	}
	dfsvis[node]=0;
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
vector<int> vec[n];
for(int i=0;i<m;i++)
{
		int x,y;
		cin>>x>>y;
		vec[x].push_back(y);											//cycle detection in directed graph using dfs
}
bool res=false;
vector<int> vis(n,0);
vector<int> dfsvis(n,0);
for(int i=0;i<n;i++)
{
	if(!vis[i])
	{
		if(checkcycle(i,vec,dfsvis,vis))
		{

			res=true;
			break;
		}

	}
}
if(res==true)
	cout<<"cycle is present"<<endl;
else
	cout<<"cycle is not present"<<endl;
return 0;
}