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
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	bool ans=true;
    	for(int i=0;i<n-1;i++)
    	{
    		if(arr[i]==arr[i+1])continue;
    		else{
    			ans=false;
    			break;
    		}
    	}
    	if(ans==true)
    		{
                cout<<0<<"\n";
                continue;
            }
        else{
            int grt=INT_MIN;
            for(auto &x:arr)
            {
                if(x>grt)
                {
                    grt=x;
                }
            }
            if(grt==arr[n-1])
            {
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
    	
    }
    return 0;
}