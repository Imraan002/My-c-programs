#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int mod=1e9+7;

int n,m,k;

int dp[2002][2002];
ll int bricks_colour(int bricks,int colour)
{
	if(colour>k)
		return 0;
	if(bricks==n)
	{
		if(colour==k)
			return 1;
		else
			return 0;
	}

	if(dp[bricks][colour]!=-1)
		return dp[bricks][colour];
	ll int ans1 = (bricks_colour(bricks+1,colour))%mod;

	ll int ans2 = (bricks_colour(bricks+1,colour+1)*(m-1))%mod;


	return dp[bricks][colour]=(ans1+ans2)%mod;
}
void solve()
{
   
   cin>>n>>m>>k;

  ll int ans = bricks_colour(1,0);
  cout<<(ans*m)%mod<<"\n";
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        memset(dp,-1,sizeof(dp));
        solve();
    }
    return 0;
}