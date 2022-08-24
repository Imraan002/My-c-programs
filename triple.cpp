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
    	int arr[n];
    	map<int,int> mp;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		mp[arr[i]]++;
    	}
    	
    	int ans=-1;
    	for(auto k:mp)
    	{
    		if(k.second>=3)
    		{
    			cout<<k.first<<"\n";
    			ans=1;
    			break;
    		}
    	}
    	if(ans==-1)
    	{
    		cout<<ans<<"\n";
    	}

    }
    return 0;
}