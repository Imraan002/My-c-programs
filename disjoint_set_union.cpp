#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e2+10;
int parent[N];
int Size[N];							//program to find connected components using DSU
void make(int v)
{
	parent[v]=v;
	Size[v]=1;
}
int find(int v)
{
	if(parent[v]==v)return v;
	return parent[v]=find(parent[v]);       			//path compression 
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
    for(int i=1;i<=nodes;i++)
    {
    	make(i);
    }
    for(int i=1;i<=edges;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	Union(u,v);
    }
    int connected_cmpts=0;
    for(int i=1;i<=nodes;i++)
    {
    	if(parent[i]==i)
    		connected_cmpts++;
    }
    cout<<connected_cmpts<<"\n";
    return 0;
}