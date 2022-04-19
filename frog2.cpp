#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
int dp[N];
int frog2(int n,int h[],int k)
{
	if(n==0)
        return 0;
    if(n==1)
        return abs(h[1]-h[0]);
    if(dp[n]!=-1)
        return dp[n];
     int ans=INT_MAX;
     for(int i=1;i<=k;i++)                                          //memoisation
     {
        if(n-i>=0)
            ans=min(ans,frog2(n-i,h,k)+abs(h[n-i]-h[n]));
     }
     return dp[n]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    memset(dp,-1,sizeof(dp));
    int n,k;
    cin>>n>>k;
    int h[n];
    for(int i=0;i<n;i++)
    {
    	cin>>h[i];
    }
    cout<<frog2(n-1,h,k);
    return 0;
}