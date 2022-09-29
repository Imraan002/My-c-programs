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


void solve()
{
	cin>>n;

	for(int i=1;i<=n;i++)
	{
		cin>>pts[i];
	}

	for(int len=3;len<=n;len++)
	{

		
			for(int l=1;l+len-1<=n;l++)
			{
				int r = l+len-1;

				if(len==3)
				{
					dp[l][r]= cost(l,l+1,r);
				}
				else{
					int ans=1e18;
					for(int x = l+1;x<=r-1;x++)
					{
						if(x==l+1)
						{
							ans =min(ans, cost(l,x,r)+dp[x][r]);
						}
						else if(x==r-1)
						{
							ans = min(ans,cost(l,x,r)+dp[l][x]);
						}
						else{
							ans = min(ans,cost(l,x,r)+dp[l][x]+dp[x][r]);
						}
					}
					dp[l][r]=ans;
				}
				
			}
		
	}

	cout<<dp[1][n]<<"\n";
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


	while(t--)
	{

		solve();
	}
	return 0;
}