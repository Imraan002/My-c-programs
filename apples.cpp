#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int fact[2000009];
ll int inv[2000009];

const long long mod=1e9+7;
ll int binary_expo(ll int a,ll int b)
{
	ll int ans=1;
	while(b)
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
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    

    fact[0]=1;
    inv[0]=1;
    for(int i=1;i<2000009;i++)
    {
    	fact[i] = (fact[i-1]*i)%mod;
    	inv[i] = binary_expo(fact[i],mod-2)%mod;
    }

    ll int n,r;
    cin>>n>>r;

    long long int ans = fact[n+r-1]%mod*inv[n-1]%mod*inv[r]%mod;
    cout<<ans<<"\n";
    return 0;
}