#include<bits/stdc++.h>
using namespace std;
#define ll long long

map<int,int> mp;
void solve()
{
   int n;
   cin>>n;

   for(int i=2;i*i<=n;i++)
   {
   			while(n%i==0)
   			{
   				mp[i]++;
   				n=n/i;
   			}

   }
   if(n>1)
   	{
   		mp[n]++;
   		}

   ll int ans=1;
   for(auto k:mp)
   {
   		//cout<<k.first<<"->"<<k.second<<"\n";
   		ans =ans*(k.second+1);
   }
   cout<<ans<<"\n";
   mp.clear();
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