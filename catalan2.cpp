#include <bits/stdc++.h>
using namespace std;
int solve(int n)
{
	int res=0;
	if(n<=1)
	{
		return 1;
	}
	for(int i=0;i<=n-1;i++)
	{
		res+=solve(i)*solve(n-1-i);
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
int k=solve(n);
cout<<k;
return 0;
}