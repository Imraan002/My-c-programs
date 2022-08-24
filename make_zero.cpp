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
    	ll int n;
    	cin>>n;

    	ll int arr[n];

    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}

    ll int bits[32];

    	memset(bits,-1,sizeof(bits));

    	for(int i=0;i<n;i++)
    	{
    		for(int j=0;j<32;j++)
    		{
    			if(arr[i]&(1<<j))
    			{
    				bits[j]=1;
    			}
    		}
    	}

    	ll int ans=0;

    	for(int i=0;i<32;i++)
    	{
    		if(bits[i]==1)
    		{
    			ans++;
    		}
    	}
    	cout<<ans<<"\n";

    }
    return 0;
}