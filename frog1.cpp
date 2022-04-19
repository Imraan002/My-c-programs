#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
int dp[N];
int frog1(int n,int h[])
{
	 dp[0]=0;
	 dp[1]=abs(h[1]-h[0]);
	 for(int i=2;i<=n;i++)
	 {																	//tabulation
	 	dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
	 }
	 return dp[n];
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
    int h[n];
    for(int i=0;i<n;i++)
    {
    	cin>>h[i];
    }
    cout<<frog1(n-1,h);
    return 0;
}