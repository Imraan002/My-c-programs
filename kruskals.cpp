#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int parent[N];
int rnk[N];
void makeset(void)
{
	for(int i=0;i<N;i++)
	{
		parent[i]=i;
		rnk[i]=0;
	}
}
struct node{
	int u,v,wt;
	node(int x,int y,int z)
	{
		u=x;
		v=y;
		wt=z;
	}
};
bool comp(node a,node b)
{
	return a.wt<b.wt;
}
int findpar(int node)
{
	if(parent[node]==node)
		return node;
	else
		return parent[node]=findpar(parent[node]);        //path compression step
}
void unn(int x,int y)
{
	int u=findpar(x);
	int v=findpar(y);
	if(rnk[u]>rnk[v])
	{
		parent[v]=u;
	}
	else if(rnk[v]>rnk[u])
	{
		parent[u]=v;				//union code
	}
	else
	{
		parent[u]=v;
		rnk[v]++;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
makeset();
int n,m;
cin>>n>>m;
vector<node> edges;
for(int i=0;i<m;i++)
{																	//MST using kruskal's algorithm
	int u,v,wt;
	cin>>u>>v>>wt;
	edges.push_back(node(u,v,wt));
}
sort(edges.begin(),edges.end(),comp);
int cost=0;
vector<pair<int,int>> mst;
for(auto it:edges)
{
	if(findpar(it.u)!=findpar(it.v))
	{
		cost+=it.wt;
		mst.push_back({it.u,it.v});
		unn(it.u,it.v);
	}
}
cout<<cost<<endl;
for(auto ele:mst)
{
	cout<<ele.first<<"->"<<ele.second<<endl;
}
return 0;
}
