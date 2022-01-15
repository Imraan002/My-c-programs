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
    	for(ll int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	ll int res[n];
    	for(int i=0;i<n;i++)
    	{
    		if(i!=0)
    			res[i]=__gcd(arr[i],res[i-1]);
    		else
    			res[i]=arr[i];
    	}
    	bool ans=false;
    	for(int i=0;i<n;i++)
    	{
    		if(res[i]!=arr[i])
    		{
    			ans=true;
    			break;
    		}
    	}
    	if(ans)
    	{
    		cout<<-1<<"\n";
    		continue;
    	}
    	for(int i=0;i<n;i++)
    	{
    		cout<<res[i]<<" ";
    	}
    	cout<<"\n";
    }
    return 0;
}