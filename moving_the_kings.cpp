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
    
    int n,q;
    cin>>n>>q;

    vector<int> x_arr(n);
    vector<int> y_arr(n);

    ll int x_prefix[n];
    ll int y_prefix[n];
    for(int i=0;i<n;i++)
    {
    	cin>>x_arr[i]>>y_arr[i];

    }
    sort(x_arr.begin(),x_arr.end());
    sort(y_arr.begin(),y_arr.end());
    
    x_prefix[0]=x_arr[0];
    y_prefix[0]=y_arr[0];

    for(int i=1;i<n;i++)
    {
    	x_prefix[i]=x_prefix[i-1]+x_arr[i];
    	y_prefix[i]=y_prefix[i-1]+y_arr[i];
    }

    for(int i=0;i<q;i++)
    {
    	ll int x,y;
    	cin>>x>>y;

    	int x_idx = upper_bound(x_arr.begin(),x_arr.end(),x)-x_arr.begin();

    	ll int x0 = abs((x*x_idx)-x_prefix[x_idx-1]);
    	ll int x1= abs((x_prefix[n-1]-x_prefix[x_idx-1])-(x*(n-x_idx)));
    	ll int sum = x0+x1;

    	int y_idx = upper_bound(y_arr.begin(),y_arr.end(),y)-y_arr.begin();

    	
    	ll int y0 = abs((y*y_idx)-y_prefix[y_idx-1]);
    	ll int y1= abs(y_prefix[n-1]-y_prefix[y_idx-1])-(y*(n-y_idx));

    	sum += y0+y1;

    	cout<<sum<<"\n";


    }  

    
    return 0;
}