#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll int mod=1e9+7;
vector<ll int> fact(1000009);

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
    return ans%mod;
}
void solve()
{
   int a,b;
   cin>>a>>b;

   ll int ans = fact[a] * binary_expo(fact[a-b],mod-2)%mod* binary_expo(fact[b],mod-2)%mod; 
   cout<<ans<<"\n";
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    fact[0]=1;
    for(int i=1;i<=1e6;i++)
    {
    	fact[i]=(fact[i-1]*i)%mod;
    }
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}