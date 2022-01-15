#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll int mod=1e18+7;
ll int binary_mult(ll int a,ll int b)
{
	ll int ans=0;
	while(b)
	{
		if(b&1)
		{
			ans=(ans+a)%mod;
		}
		a=(a+a)%mod;
		b=b>>1;
	}
	return ans;												//binary multiplication
}
ll int binary_expo(ll int a,ll int b)
{
	ll int res=1;
	while(b)
	{
		if(b&1)
		{											//binary exponentiation
			res=binary_mult(res,a);
		}
		a=binary_mult(a,a);
		b=b>>1;
	}
	return res;
}

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
ll int a,b;
cin>>a>>b;
cout<<binary_mult(a,b);
cout<<endl;
cout<<binary_expo(334,3243);
return 0;
}