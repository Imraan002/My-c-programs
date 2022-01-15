#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int dp[N];
int minnumsquare(int n)
{
	dp[0]=0;
	dp[1]=1;
	
	for(int i=2;i<=n;i++)
	{
		int min=INT_MAX;
		for(int j=1;j*j<=i;j++)
		{
			int rem=i-j*j;
			if(dp[rem]<min)
			{
				min=dp[rem];
			}
		}
		dp[i]=min+1;					//tabulation bottom up
		
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

	cout<<minnumsquare(n);
return 0;
}