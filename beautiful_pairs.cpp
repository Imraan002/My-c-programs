#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		map<int,int> mp;
		for(int i=0;i<n;i++)
		{
			ll k;
			cin>>k;
			mp[k]++;
		}
		ll ans=0;
		for(auto k:mp)
		{
			ans+=(n-k.second)*k.second;
		}
		cout<<ans<<endl;
	}
	return 0;
}