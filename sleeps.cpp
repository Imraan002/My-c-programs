#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n,hh,mm;
   cin>>n>>hh>>mm;

   int ans=INT_MAX;

   for(int i=0;i<n;i++)
   {
        int h,m;
        cin>>h>>m;

        int duration = 0;
        if( (h>=hh && m>=mm) || h>hh)
        {
            duration = (h-hh)*60+(m-mm);
        } 
        else{
            duration = (h-hh+24)*60+(m-mm);
        }
     
        ans=min(ans,duration);
   }
   cout<<ans/60<<" "<<ans%60<<"\n";
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