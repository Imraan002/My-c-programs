#include <bits/stdc++.h>
using namespace std;
int catalan(int n)
{
	int dp[n+1]={0};
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++)
	{
		for(int j=0;j<i;j++)
		{
			dp[i]+=dp[j]*dp[i-j-1];
		}
	}
	return dp[n];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int k=catalan(n);

cout<<k;
	
return 0;
}