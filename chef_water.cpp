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
    	ll int n,v,minans(0),maxans(0);
    	cin>>n>>v;
    	if(v==1)
    	{
    		cout<<((n-1)*n)/2<<" "<<((n-1)*n)/2;
    		continue;
    	}
    
    		 maxans=((n-1)*n)/2;
    		 minans=v+(((n-1)-v)*(((n-1)-v)+1))/2-1;
   		
    	cout<<maxans<<" "<<minans<<"\n";
    }
    return 0;
}