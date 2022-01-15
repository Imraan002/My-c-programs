#include <bits/stdc++.h>
using namespace std;
struct node
{
	int first,second,weight;
	node(int u,int v,int wt)
	{
		first=u;
		second=v;
		weight=wt;
	}
};
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int n,m;
cin>>n>>m;
vector<node> vec;
vector<int> dist(n,1e5);
for(int i=0;i<m;i++)
{
	int u,v,wt;
	cin>>u>>v>>wt;
	vec.push_back(node(u,v,wt));
}
dist[0]=0;
for(int i=0;i<n-1;i++)
{																//bellman ford algo
	for(auto it:vec)											//gives shortest route 
	{
		if(dist[it.first]+it.weight<dist[it.second])			//also detects negative cycle
		{
			dist[it.second]=dist[it.first]+it.weight;
		}
	}
}
bool res=false;
for(auto k:vec)
{
	if(dist[k.first]+k.weight<dist[k.second])
	{
		res=true;
		break;
	}
}
if(res)
cout<<"Negative cycle is present"<<endl;
else
{
	for(int i=0;i<n;i++)
	{
		cout<<0<<"->"<<i<<"="<<dist[i]<<endl;
	}
}
return 0;
}