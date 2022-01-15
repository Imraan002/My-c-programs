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
{
	cin>>arr[i];
}
int amt;
cin>>amt;
int dp[amt+1];					//coin change problem
memset(dp,0,sizeof(dp));
dp[0]=1;
for(int i=0;i<n;i++)
{
	for(int j=arr[i];j<amt+1;j++)
	{
		dp[j]+=dp[j-arr[i]];
	}
}
cout<<dp[amt];
return 0;
}