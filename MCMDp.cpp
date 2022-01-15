#include <bits/stdc++.h>
using namespace std;
const int N=105;
int dp[N][N];
int MCM(int arr[],int i,int j)
{
	if(i>=j)
		return 0;
	int ans=INT_MAX;
	if(dp[i][j]!=-1)
		return dp[i][j];
	for(int k=i;k<j;k++)
	{
	     ans=min(ans,MCM(arr,i,k)+MCM(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
	}
	return dp[i][j]=ans;
}
int main()
{
	#ifndef ONLINE_JUDGE							//Matrix chain multiplication
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
memset(dp,-1,sizeof(dp));
cout<<MCM(arr,1,n-1);
return 0;
}