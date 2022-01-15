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
    	if(k==0)
    	{
    		cout<<"Yes\n";
    		cout<<0<<"\n";
    		continue;
    	}
    	ll int cnt=0;
    	for(ll int i=0;i<(ll int)log2(k)+1;i++)
    	{
    		if(k&(1<<i))
    		{
    			cnt++;
    		}
    	}
    	if(cnt!=(int)log2(k)+1)
    	{
    		cout<<"No\n";
    		continue;
    	}
    	cout<<"Yes\n";
    	cout<<__builtin_popcountll(k)<<"\n";
    	for(int i=0;i<__builtin_popcountll(k);i++)
    	{
    		cout<<i+1<<"\n";
    	}
    }
    return 0;
}