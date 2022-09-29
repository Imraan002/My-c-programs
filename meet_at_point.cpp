#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){
	int n;
	cin>>n;

	int pts[n],time[n];

	for(int i=0;i<n;i++)
	{
		cin>>pts[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>time[i];
	}
	vector<int> arr;
	for(int i=0;i<n;i++)
	{
		arr.push_back(pts[i]-time[i]);
		arr.push_back(pts[i]+time[i]);
	}

	sort(arr.begin(),arr.end());

	double ans =arr.front()+arr.back();
	ans/=2;
	cout<<sp(6)<<ans<<"\n";


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