#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
   int n;
   cin>>n;
   string str;
   cin>>str;

   int zero = count(str.begin(),str.end(),'0');
   int one =  count(str.begin(),str.end(),'1');

   if(zero<=one)
   {
   		for(int i=0;i<n;i++)
   		{
   			if(str[i]=='0')continue;
   			else{
   				cout<<str[i];
   			}
   		}
   		cout<<"\n";
   }
   else{

   		for(int i=0;i<n;i++)
   		{
   			if(str[i]=='1')continue;
   			else{
   				cout<<str[i];
   			}
   		}
   		cout<<"\n";
   }
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