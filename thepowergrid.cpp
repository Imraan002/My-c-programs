#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int N=2e3+10;
vector<pair<ll int,pair<ll int,ll int>>> edges;
int Size[N];
int parent[N];
void make(int vertex)
{
	parent[vertex]=vertex;
	Size[vertex]=1;
}
int find(int vertex)
{
	if(parent[vertex]==vertex)return vertex;
	return parent[vertex]=find(parent[vertex]);
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
    ll int n;
    cin>>n;
    vector<pair<ll int,ll int>> cities(n+1);
    for(ll int i=1;i<=n;i++)
    {
    	cin>>cities[i].first>>cities[i].second;
    }
    vector<ll int> C(n+1);
    vector<ll int> K(n+1);
    for(ll int i=1;i<=n;i++)
    {
   		cin>>C[i];
    }
    for(ll int i=1;i<=n;i++)
    {
    	
    	cin>>K[i];
    	
    }
    for(ll int i=1;i<=n;i++)
    {
    	make(i);
    }
    for(int i=1;i<=n;i++)
    {
    	ll int wt=C[i];
    	ll int city1=i;
    	ll int city2=0;
    	edges.push_back({wt,{city1,city2}});
    }
    for(int i=1;i<=n;i++)
    {
    	for(ll int j=i+1;j<=n;j++)
    	{
    		ll int wt=(abs(cities[i].first-cities[j].first)+abs(cities[i].second-cities[j].second))*(K[i]+K[j]);
    		ll int city1=i;
    		ll int city2=j;
    		edges.push_back({wt,{city1,city2}});
    	}
    }
    sort(edges.begin(),edges.end());
    vector<ll int> power_stations;
    vector<pair<ll int,ll int>> connections;
    ll int cost=0;
    for(auto k:edges)
    {
    	if(find(k.second.first)==find(k.second.second))continue;
    	Union(k.second.first,k.second.second);
    	cost+=k.first;
    	if(k.second.first==0 || k.second.second==0)
    	{
    		power_stations.push_back(max(k.second.first,k.second.second));
    	}
    	else{
    		connections.push_back({k.second.first,k.second.second});
    	}
    }
    cout<<cost<<"\n";
    cout<<power_stations.size()<<"\n";
    for(auto k:power_stations)
    {
    	cout<<k<<" ";
    }
    cout<<"\n";
    cout<<connections.size()<<"\n";
    for(auto k:connections)
    {
    	cout<<k.first<<" "<<k.second<<"\n";
    }
    cout<<"\n";
    return 0;
}