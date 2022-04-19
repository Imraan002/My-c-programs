#include<bits/stdc++.h>
using namespace std;
#define ll long long
long long int wt[100000];
long long int val[100000];
long long int dp[1000][100010];
long long int knapsack(int idx,int max_cap)
{
	if(idx<0 || max_cap==0)
		return 0;
	if(dp[idx][max_cap]!=-1)
		return dp[idx][max_cap];
	long long int ans=knapsack(idx-1,max_cap);
	if(max_cap-wt[idx]>=0)
		ans=max(ans,knapsack(idx-1,max_cap-wt[idx])+val[idx]);
	return dp[idx][max_cap]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,max_cap;
    cin>>n>>max_cap;
    for(int i=0;i<n;i++)
    {
    	cin>>wt[i]>>val[i];
    }
    memset(dp,-1,sizeof(dp));
    cout<<knapsack(n-1,max_cap);
    return 0;
}