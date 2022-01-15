#include <bits/stdc++.h>
using namespace std;
int mod=17;
int binary_recur(int a,int b)
{
	if(b==0)
		return 1;
	int res=binary_recur(a,b/2);
	if(b&1)
	{
		return a*(res*res)%mod;	
	}
	else
		return (res*res)%mod;
}
int binary_iter(int a,int b)
{
	int ans=1;
	while(b>0)
	{
		if(b&1)
		{
			ans=(ans*a)%mod;
		}
		a=(a*a)%mod;
		b=b>>1;
	}
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int a,b;
cin>>a>>b;
cout<<binary_recur(a,b)<<endl;
cout<<binary_iter(a,b);

return 0;
}