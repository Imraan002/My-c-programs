#include<bits/stdc++.h>
using namespace std;
#define ll long long

int nodes,edges;

vector<int> adj[100100];

int dp[100100];
ll int rec(int node)
{
	if(dp[node]!=-1)
		return dp[node];
	ll int ans = 0;

	for(auto child:adj[node])
	{
		ans = max(ans,1+rec(child));
	}

	return dp[node]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>nodes>>edges;

    for(int i=0;i<edges;i++)
    {
    	int x,y;
    	cin>>x>>y;

    	adj[x].push_back(y);
    }

    memset(dp,-1,sizeof(dp));
    ll int ans=0;

    for(int i=1;i<=nodes;i++)
    {
    	ans=max(ans,rec(i));
    }
    cout<<ans<<"\n";
    return 0;
}