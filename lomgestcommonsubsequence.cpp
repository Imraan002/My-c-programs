#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
int lcs(int n)
{
	int dp[n+1];
	dp[0]=1;
	int res=0;
	for(int i=1;i<=n;i++)
	{
		int maxtill=0;
		for(int j=0;j<i;j++)
		{
			if(arr[j]<arr[i])
			{
				maxtill=max(maxtill,dp[j]);
			}
		}
		dp[i]=maxtill+1;
		res=max(res,dp[i]);			
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		int n;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<lcs(n)<<endl;
return 0;
}