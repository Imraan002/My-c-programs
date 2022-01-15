#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=600;
ll int dist[N][N];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cin>>dist[i][j];
    	}
    }
    vector<ll int> del_order(n);
    for(int i=0;i<n;i++)
    {
    	cin>>del_order[i];
    }
    reverse(del_order.begin(),del_order.end());
    vector<ll int> ans;
    for(int k=0;k<n;k++)
    {
    	ll int k_node=del_order[k];
    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=n;j++)
    		{
    			dist[i][j]=min(dist[i][j],dist[i][k_node]+dist[k_node][j]);
    		}
    	}
    	ll int sum=0;
    	for(int i=0;i<=k;i++)
    	{
    		for(int j=0;j<=k;j++)
    		{
    			sum+=dist[del_order[i]][del_order[j]];
    		}
    	}
    	ans.push_back(sum);
    }
    reverse(ans.begin(),ans.end());
    for(auto k:ans)
    {
    	cout<<k<<"\n";
    }
    return 0;
}