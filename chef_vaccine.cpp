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
    	int n,p,x,y;
    	cin>>n>>p>>x>>y;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int zero(0);
    	int one(0);
    	for(int i=0;i<p;i++)
    	{
    		if(arr[i]==0)
    			zero++;
    		else
    			one++;
    	}
    	int ans=0;
    	ans=zero*x+one*y;
    	cout<<ans<<endl;
    }
    return 0;
}