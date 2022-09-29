#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long


void solve(){
	int n;
	cin>>n;

	int a[n];
	int b[n];
	vector<int> arr;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		arr.push_back(b[i]-a[i]);
	}

	sort(arr.begin(),arr.end(),greater<int>());

	
	int ans(0);
	int l=0;
	int r=n-1;
	while(l<r)
	{
		if(arr[l]+arr[r]>=0)
		{

			ans++;
			l++;
			r--;

		}
		else{
			r--;
		}
	
	}
	cout<<ans<<"\n";	

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