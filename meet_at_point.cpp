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

    	int x_arr[n];
    	int y_arr[n];

    	for(int i=0;i<n;i++)
    	{
    		cin>>x_arr[i];
    		cin>>y_arr[i];
    	}

    	sort(x_arr,x_arr+n);
    	sort(y_arr,y_arr+n);

    	int x = x_arr[(n-1)/2];
    	int y = y_arr[(n-1)/2];

    	int ans=0; 

    	for(int i=0;i<n;i++)
    	{
    		ans+=abs(x-x_arr[i]);
    		ans+=abs(y-y_arr[i]);
    	}
    	cout<<ans<<"\n";
    }
    return 0;
}