#include <bits/stdc++.h>
using namespace std;
int minjumps(int arr[],int n)
{
	vector<int> dp(n+1);
	dp[n]=0;
	int ans;
	for(int i=n-1;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			 ans=INT_MAX;
			for(int j=1;j<=arr[i] && i+j<dp.size();j++)
			{
				ans=min(ans,dp[i+j]);
			}
			
		}							//min jumps to reach end
		dp[i]=ans+1;
	}
	return dp[0];
}
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
cout<<minjumps(arr,n);
return 0;
}