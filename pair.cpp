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
    
    int t;
    cin>>t;

    while(t--)
    {
    	int n;
    	cin>>n;

    	int arr[n+1];

    	arr[0]=0;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>arr[i];
    	}

    	int prefix[n+1];

    	prefix[0]=0;
    	ll int ans=0;
    	for(int i=1;i<=n;i++)
    	{
    		prefix[i]=prefix[i-1]+(arr[i]<i);
    	}
    	for(int i=1;i<=n;i++)
    	{
    		if(arr[i]<i && arr[i])
    		{
    			int idx=arr[i]-1;
    			ans+=prefix[idx];

    		}
    	}
    	cout<<ans<<"\n";
    	
    }
    return 0;
}