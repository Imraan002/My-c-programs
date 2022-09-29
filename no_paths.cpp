#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll int mod=1e9+7;

int dp[1005][1005];

int arr[1005][1005];

ll int solve( int row, int col)
{

	if(row==1 && col==1 && arr[row][col]==0)
		return 1;

	if(row<=0 || col<=0)
		return 0;

	ll int ans = 0;

	if(dp[row][col]!=-1)
		return dp[row][col];

	if(row-1>=1 && arr[row-1][col]==0)
	{
		ans += solve(row-1,col)%mod;
	}

	if(col-1>=1 && arr[row][col-1]==0)
	{
		ans += solve(row,col-1)%mod;
	}

	return dp[row][col]=ans%mod;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll int t;
    cin>>t;

    while(t--)
    {
    	int n,m;
    	cin>>n>>m;

    	for(int i=1;i<=n;i++)
    	{
    		for(int j=1;j<=m;j++)
    		{
    			cin>>arr[i][j];

    		}
    	}

    	memset(dp,-1,sizeof(dp));

    	ll int ans = solve(n,m);
    	cout<<ans%mod<<"\n";
    }
    return 0;
}