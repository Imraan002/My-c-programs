#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int mod=1e9+7;
const int N=1e5+10;
vector<int> Tree[N];
int subtree_sum[N];
int arr[N];
void dfs(int vertex,int par=0)
{
	subtree_sum[vertex]+=arr[vertex-1];
	for(int child:Tree[vertex])
	{
		if(child==par) continue;
		dfs(child,vertex);
		subtree_sum[vertex]+=subtree_sum[child];
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    int nodes,edges;
    cin>>nodes>>edges;
    for(int i=0;i<edges;i++)
    {
    	int u,v;
    	cin>>u>>v;
    	Tree[u].push_back(v);
    	Tree[v].push_back(u);
    }
    dfs(1);
    ll int ans=INT_MIN;
    for(int i=2;i<=nodes;i++)
    {
    	int part1=subtree_sum[i];
    	int part2=subtree_sum[1]-part1;
    	ans=max(ans,part1*1ll*part2);
    }
    cout<<ans%mod<<"\n";
    return 0;
}