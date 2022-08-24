#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int mod=1e9+7;
ll int fact[1000009];
ll int inv[1000009];
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

	for(int i=1;i<1000009;i++)
	{
		fact[i]=(fact[i-1]*i)%mod;
		inv[i]= binary_expo(fact[i],mod-2)%mod;
	}
    ll int n;
    cin>>n;

    ll int deno1 =(n/2);
    ll int ans1 = fact[n]%mod*inv[deno1]%mod*inv[n-deno1];
    
    ll int deno2 = (n+2)/2;

    ll int ans2 = fact[n]%mod*inv[deno2]%mod*inv[n-deno2]%mod;
    cout<<(ans1-ans2)%mod<<"\n";
    //cout<<fact[n]%mod;
    return 0;
}