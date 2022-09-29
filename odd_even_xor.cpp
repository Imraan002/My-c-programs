#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
	int n;
	cin>>n;

	vector<int> arr(n,0);

	if(n&1)
	{
		for(int i=1,cnt=1;i<n;i+=2,cnt++)
		{
			arr[i] = cnt;
		}
		for(int i=2,cnt=1;i<n;i+=2,cnt++)
		{
			arr[i] = cnt;
		}
	}
	else{

		for(int i=0,cnt=1;i<n;i+=2,cnt++)
		{
			arr[i] = cnt;
		}
		for(int i=1,cnt=1;i<n;i+=2,cnt++)
		{
			arr[i] = cnt;
		}
	}

	if(((n+1)/2)%2==0)
	{
		for(int i=0;i<n;i+=2)
		{
			arr[i] |= (1ll<<30);
		}
	}
	else{

		for(int i=0;i+2<n;i+=2)
		{
			arr[i] |= (1ll<<30);
		}
		for(int i=2;i<n;i+=2)
		{
			arr[i] |= (1ll<<29);
		}
	}
	for(auto ele:arr)
	{
		cout<<ele<<" ";
	}
	cout<<"\n";
}

signed main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);

	int t;
	cin >> t;


	while(t--)
	{
		solve();
	}
	return 0;
}