#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

void solve(){

	int n,m;
	cin>>n>>m;

	vector<int> arr(m);

	for(int i=0;i<m;i++)
	{
		cin>>arr[i];
	}

	sort(arr.begin(),arr.end());

	vector<int> diff;

	for(int i=0;i<m-1;i++)
	{
		diff.push_back(arr[i+1]-arr[i]-1);
	}

	diff.push_back((n-arr[m-1]+arr[0]-1));

	sort(diff.begin(),diff.end(),greater<int>());

	
	int day=0;

	int ans(0);

	for(int i=0;i<m;i++)
	{
		int curr = diff[i];
		curr-=(2*day);

		if(curr<=0)
			break;
		ans+=curr-1;
		if(curr==1)
			ans++;
		day+=2;
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