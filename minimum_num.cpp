#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin>>n;

   vector<int> ans;
   for(int i=9;i>=1;i--)
   {
   		if(n>=i)
   		{
   			ans.push_back(i);
   			n=n-i;
   		}

   }
   reverse(ans.begin(),ans.end());
   for(auto k:ans)
   {
   	cout<<k;
   }
   cout<<"\n";
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