#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int mod=1e9+7;
ll int binary_expo(ll int a,ll int b,ll int m)
{
	ll int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans = (ans*a)%m;
		}
		a=(a*a)%m;
		b=b>>1;
	}
	return ans;
}

void solve()
{
   int a,b,c;

   cin>>a>>b>>c;

   ll int ans = binary_expo(a,binary_expo(b,c,mod-1),mod);
   cout<<ans<<"\n";
}
 
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}