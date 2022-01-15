#include<bits/stdc++.h>
using namespace std;
#define ll long long
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
    	ll int n,k;
        cin>>n>>k;
        ll int total_matches=(n*(n-1))/2;
        ll int sub=((n-k)*(n-k-1))/2;
        ll int ans=(total_matches-sub)/k;
        cout<<2*ans<<"\n";
    }
    return 0;
}