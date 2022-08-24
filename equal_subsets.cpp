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

    	int arr[n],brr[n];

    	map<ll,ll> mp;
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    		while( arr[i]%2==0 )
    		{
    			arr[i]=arr[i]/2;
    		}
    		mp[arr[i]]++;
    	}

    	for(int i=0;i<n;i++)
    	{
    		cin>>brr[i];
    		while( brr[i]%2==0)
    		{
    			brr[i]=brr[i]/2;
    		}
    	}

    	

    	bool ans=true;
    	for(int i=0;i<n;i++)
    	{
    		bool flag=false;
    		while(brr[i] && flag==false)
    		{
    			if(mp[brr[i]])
    			{
    				mp[brr[i]]--;
    				flag=true;
    				break;
    			}
    			else{
    				brr[i]/=2;;
    			}
    		}
    		if(flag==false)
    		{
    			ans=false;
    			break;
    		}
    		
    	}
    	if(ans)
    		cout<<"Yes\n";
    	else
    		cout<<"No\n";

    }
    return 0;
}