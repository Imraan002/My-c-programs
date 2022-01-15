#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int dp[N];
int minnumsquare(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(dp[n]!=-1)
		return dp[n];
	int ans=INT_MAX;
	for(int i=1;i*i<=n;i++)						//memoization top down
	{
		ans=min(ans,1+minnumsquare(n-i*i));
	}
	return dp[n]=ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	for(int i=0;i<n+1;i++)
	{
		dp[i]=-1;
	}
	cout<<minnumsquare(n);
return 0;
}