#include<bits/stdc++.h>
using namespace std;
#define int long long

int n;

int pts[101];

int dp[101][101];

int cost(int x,int y ,int z)
{
	return pts[x]*pts[y]*pts[z];
}

int rec(int l,int r)
{
	

	if(l+2==r)
	{
		return cost(l,l+1,r);
	}

	if(dp[l][r]!=-1)
		return dp[l][r];

	int ans = 1e18;

	for(int x = l+1; x<=r-1; x++)
	{
		if(x==l+1)
		{
			ans = min(ans,cost(l,x,r)+rec(x,r));
		}
		else if(x==r-1)
		{
			ans = min(ans,cost(l,x,r)+rec(l,x));
		}
		else{
			ans = min(ans,cost(l,x,r)+rec(l,x)+rec(x,r));
		}
	}
	return dp[l][r]=ans;
}
void solve()
{
   cin>>n;

   for(int i=1;i<=n;i++)
   {
   		cin>>pts[i];
   }

   memset(dp,-1,sizeof(dp));

   cout<<rec(1,n)<<"\n";
}
 
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin >> t;

    memset(dp,-1,sizeof(dp));
    while(t--)
    {
        
        solve();
    }
    return 0;
}