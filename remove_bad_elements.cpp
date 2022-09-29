#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n;
	cin>>n;

	int arr[n];
	map<int,int> mp;


	int ans=INT_MIN;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		mp[arr[i]]++;
	}
	for(auto ele:mp)
	{
		ans=max(ans,ele.second);
	}
	cout<<n-ans<<"\n";
	
}



signed main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);              //Imraan
    #endif

        fast_io;
        int t;
        cin>>t;
        
    while(t--)
    {
        
        solve();    

    }


    return 0;
}