#include<bits/stdc++.h>
using namespace std;
#define int long long

int n,W;

int wt[110];
int val[110];

int dp[101][100005];
int rec(int level,int value)
{
	if(value==0)
		return 0;

	if(level<0)
		return INT_MAX;	

	if(dp[level][value]!=-1)
		return dp[level][value];

	int ans = rec(level-1,value);

	if(value-val[level]>=0)
	{
		ans=min(ans,rec(level-1,value-val[level])+wt[level]);
	}

	return dp[level][value]=ans;
}
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n>>W;

    for(int i=0;i<n;i++)
    {
    	cin>>wt[i]>>val[i];
    }

    memset(dp,-1,sizeof(dp));

    for(int i=1e5;i>=0;i--)
    {
    	if(rec(n-1,i)<=W)
    	{
    		cout<<i<<"\n";
    		break;
    	}
    }

    return 0;
}