#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int> dp(N,-1);
int fib(int n)
{
	if(n==0)
		return 0;
	if(n==1 || n==2 )
		return n-1;
	if(dp[n]!=-1)
		return dp[n];
	else
		return dp[n]=fib(n-1)+fib(n-2);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);				//fibonacci series 
		freopen("output.txt","w",stdout);
	#endif
	int n;											//memoization(top-down approach)
	cin>>n;
	cout<<fib(n);
return 0;
}