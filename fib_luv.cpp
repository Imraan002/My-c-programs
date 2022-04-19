#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+10;
ll int dp[N];
// ll int fib(ll int n)
// {
// 	if(n<=2)
// 		return n-1;
// 	if(dp[n]!=-1)									//memoization (top down dp)
// 		return dp[n];
// 	return dp[n]=fib(n-1)+fib(n-2);
// }
ll int fib2(ll int n)
{
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<N;i++)
	{												//tabulation (bottom up dp)
		dp[i]=dp[i-1]+dp[i-2];
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
   // memset(dp,-1,sizeof(dp));
    ll int n;
    cin>>n;
    cout<<fib2(n)<<"\n";
    return 0;
}