#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
vector<pair<int,pair<int,int>>> mtrx;
int parent[N];
int Size[N];
void make(int v)
{
	parent[v]=v;
	Size[v]=1;
}
int find(int v)										//Minimum spanning tree using DSU
{													//Kruskal's algorithm
	if(parent[v]==v)
		return v;
	return parent[v]=find(parent[v]);
}
void Union(int v1,int v2)
{
	int a=find(v1);
	int b=find(v2);
	if(a!=b)
	{
		if(Size[a]<Size[b])
			swap(a,b);
		parent[b]=a;
		Size[a]+=Size[b];
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<nodes;i++)
    {
    	make(i);
    }
    for(int i=0;i<edges;i++)
    {
    	int u,v,wt;
    	cin>>u>>v>>wt;
    	mtrx.push_back({wt,{u,v}});
    }
    sort(mtrx.begin(),mtrx.end());
    int total_cost=0;
    for(auto k:mtrx)
    {
    	int wt=k.first;
    	int u=k.second.first;
    	int v=k.second.second;
    	if(parent[u]==parent[v])continue;
    	cout<<u<<"-->"<<v<<"\n";
    	Union(u,v);
    	total_cost+=wt;
    }
    cout<<total_cost<<"\n";
    return 0;
}