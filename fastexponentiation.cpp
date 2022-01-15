#include <bits/stdc++.h>
using namespace std;
const int mod=1e9+7;
long long int fastpower(long long int x,long long int n)
{
	long long int ans=1;
	while(n>0)
	{
		if(n%2!=0)
		{
		ans=(ans*x)%mod;
		n--;
		}
		
			x=(x*x)%mod;
			n=n/2;
		
	
	}
	return ans;
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