#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1000];
int LIS(int arr[],int idx)
{
	int ans=1;
	if(dp[idx]!=-1)
		return dp[idx];
	for(int i=0;i<arr[idx];i++)
	{
		if(arr[i]<arr[idx])
		{
			ans=max(ans,1+LIS(arr,i));
		}
	}
	return dp[idx]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    int arr[n];
    for(int &k:arr)
    {
    	cin>>k;
    }
    int ans=1;
    for(int i=0;i<n;i++)
    {
    	ans=max(ans,i);
    }
    cout<<ans;
    return 0;
}