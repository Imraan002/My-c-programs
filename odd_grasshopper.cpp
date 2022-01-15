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
    	ll int initial,steps;
    	cin>>initial>>steps;
    	for(ll int i=1;i<=steps;i++)
    	{
    		if(initial&1)
    		{
    			initial=initial+i;
    		}
    		else{
    			initial=initial-i;
    		}
    	}
    	cout<<initial<<"\n";
    }   
     return 0;
}