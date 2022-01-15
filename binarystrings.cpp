#include <bits/stdc++.h>
using namespace std;
int binary(int n)
{
	int dp0[n+1];
	int dp1[n+1];
	dp0[1]=1;
	dp1[1]=1;
	for(int i=2;i<=n;i++)
	{
		dp0[i]=dp0[i-1]+dp1[i-1];
		dp1[i]=dp0[i-1];
	}
	return dp0[n]+dp1[n];					//binary strinds with no consecutive ones
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
cout<<binary(n);
return 0;
}