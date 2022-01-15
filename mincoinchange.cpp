#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{									//minimum number of coins 
	cin>>arr[i];
}
int amt;
cin>>amt;
vector<vector<int>> dp(n+1,vector<int> (amt+1,0));
for(int i=0;i<n+1;i++)
{
	for(int j=0;j<amt+1;j++)
	{
		if(i==0 && j>0)
			dp[i][j]=INT_MAX;
	}
}
for(int i=1;i<n+1;i++)
{
	for(int j=1;j<amt+1;j++)
	{
		if(j<arr[i-1])
			dp[i][j]=dp[i-1][j];
		else
			dp[i][j]=min(1+dp[i][j-arr[i-1]],dp[i-1][j]);
	}
}

cout<<dp[n][amt];
return 0;
}