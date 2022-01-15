#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long int fastpower(long long int x,long long int n)
{
	if(n==0)
		return 1;
	if(n%2==0)
	{
		return fastpower((x*x)%mod,n/2);
	}
	return fastpower((x*x)%mod,n/2)*x;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
long long int x,n;
cin>>x>>n;
cout<<fastpower(x,n)<<endl;
return 0;
}