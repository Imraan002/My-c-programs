#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
int Size[N];
int parent[N];
void make(int v)
{
	parent[v]=v;
	Size[v]=1;
}
int find(int v)
{
	if(parent[v]==v)return v;
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
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
    	make(i);
    }
    for(int i=1;i<=k;i++)
    {;
    	int u,v;
    	cin>>u>>v;
    	Union(u,v);
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
    	if(parent[i]==i)
    		cnt++;
    }
    cout<<cnt<<"\n";
    return 0;
}