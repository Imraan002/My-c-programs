#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int lcm(ll int a,ll int b)
{
	return (a*b)/__gcd(a,b);
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
    	ll int x,k;
    	cin>>x>>k;
    	ll int minval=lcm(x,2*x);
    	ll int maxval=lcm(x*k,x*k-1);
    	cout<<minval<<" "<<maxval<<"\n";
    }
    return 0;
}