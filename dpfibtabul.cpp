#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> dp(N);
int fib(int n)
{
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	for(int i=3;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-2];
	}
	return dp[n];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);				//fibonacci series 
		freopen("output.txt","w",stdout);
	#endif
	int n;											//tabulation(bottom-up)
	cin>>n;
	cout<<fib(n);
return 0;
}