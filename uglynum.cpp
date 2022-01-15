#include <bits/stdc++.h>
using namespace std;
const int N=1000;
int dp[N];
int ugly(int n)
{
	 dp[0]=1;
	int c2=0;
	int c3=0;
	int c5=0;
	for(int i=1;i<=n;i++)
	{
		dp[i]=min({2*dp[c2],3*dp[c3],5*dp[c5]});
		if(dp[i]==2*dp[c2])
			c2++;
		if(dp[i]==3*dp[c3])
			c3++;
		if(dp[i]==5*dp[c5])
			c5++;

	}
	return dp[n-1];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
cout<<ugly(n);
return 0;
}