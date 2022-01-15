#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int M=1e9+7;
const ll int N=1e5+7;
ll int fact[N];
ll int binary_expo(ll int a,ll int b,ll int m)
{
	ll int res=1;
	while(b)
	{
		if(b&1)
		{
			res=(res*a)%M;
		}
		a=(a*a)%M;
		b/=2;
	}
	return res;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
 	int t;
 	cin>>t;
 	fact[0]=1;
 	for(int i=1;i<N;i++)
 	{
 		fact[i]=(fact[i-1]*i)%M;
 	}
 	while(t--)
 	{
 		ll int n,k;
 		cin>>n>>k;
 		ll int ans=fact[n];
 		ans=(ans*fact[k])%M;
 		ll int den=(fact[k-n]*fact[n])%M;
 		ans=(ans*binary_expo(den,M-2,M))%M;
 		cout<<ans<<endl;
 	}
    return 0;
}