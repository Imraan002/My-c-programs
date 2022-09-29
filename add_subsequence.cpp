#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n;
	cin>>n;

	map<int,int> mp;

	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;

		mp[a]++;
	}

	int ans=INT_MIN;

	for(auto ele:mp)
	{
		ans=max(ans,ele.second);
	}
	
	 int cnt(0);

	cnt = ceil(log2(ans));
	cout<<cnt<<"\n";
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