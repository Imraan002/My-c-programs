#include<bits/stdc++.h>
using namespace std;
#define ll long long

int weight[30];
int value[30];

int dp[21][101];
int solve(int n, int idx , int capacity_left)
{
	
	if(capacity_left<0)
	{
		return INT_MIN;
	}
	
	if(idx==n || capacity_left==0)
	{
		return 0;
	}
	if(dp[idx][capacity_left]!=-1)
		return dp[idx][capacity_left];
	int ans = max(solve(n,idx+1,capacity_left),value[idx]+solve(n,idx+1,capacity_left-weight[idx]));

	return dp[idx][capacity_left]=ans;


}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    memset(dp,-1,sizeof(dp));

    int n,W;
	cin>>n>>W;

	for(int i=0;i<n;i++)
	{
		cin>>weight[i]>>value[i];
	}

	int ans = solve(n,0,W);
	cout<<ans<<"\n";

    return 0;
}