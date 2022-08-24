#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n,m;
   cin>>n>>m;

   int x=n/2;
   int y=m/2;
   int tiles_total=x*y;
   int area=4*tiles_total;
   cout<<(n*m)-area<<"\n";
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