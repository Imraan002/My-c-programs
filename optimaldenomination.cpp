#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
ll t;
cin>>t;
while(t--)
{
	ll n,sum=0;
	cin>>n;
	ll arr[n];
	for(auto &x:arr)
	{
		cin>>x;
		sum+=x;
	}
	if(n==1)
	{
		cout<<"1\n";
		continue;
	}
	ll prefix[n];
	ll suffix[n];
	prefix[0]=arr[0];
	suffix[n-1]=arr[n-1];
	for(ll i=1;i<n;i++)
	{
		prefix[i]=__gcd(prefix[i-1],arr[i]);
	}
	for(ll i=n-2;i>=0;i--)
	{
		suffix[i]=__gcd(suffix[i+1],arr[i]);

	}
	ll ans=sum/prefix[n-1];
	for(ll i=0;i<n;i++)
	{
		ll k=__gcd((i<1?0:prefix[i-1]),(i>=n-1?0:suffix[i+1]));
		ans=min(ans,1ll+(sum-arr[i])/k);
	}
	cout<<ans<<endl;
}
return 0;
}