#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin>>n;

   int ans=0;
   
   for(int i=0;i<n;i++)
   {
   		
   		int k;
   		cin>>k; 
   		if(i>0 && i%2==1)
   		{
   			ans ^= k; 
   		}
   }
   if(ans)
   		cout<<"first\n";
   	else
   		cout<<"second\n";
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