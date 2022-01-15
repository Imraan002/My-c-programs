#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+7;
int Size[N];
int parent[N];
multiset<int> mst;
void make(int v)
{
	parent[v]=v;
	Size[v]=1;
    mst.insert(1);
}
void merge(int a,int b)
{
    mst.erase(mst.find(Size[a]));
    mst.erase(mst.find(Size[b]));
    mst.insert(Size[a]+Size[b]);
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
        merge(a,b);
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
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
    	make(i);
    }
    for(int i=1;i<=q;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	Union(u,v);
        if(mst.size()==1)
            cout<<0<<"\n";
        else{
           int min=*(mst.begin());
           int max=*(--mst.end());
           cout<<max-min<<"\n"; 
        }
    }
   
    return 0;
}