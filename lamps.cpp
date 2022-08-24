#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n,k,x,y;
   cin>>n>>k>>x>>y;

   int ans=0;

   ans = min((n-k)*x+(k*x),(n-k)*y+(k*x));
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