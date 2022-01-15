#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	long long int n,m;
	cin>>n>>m;
	vector<long long int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	long long int q;
	cin>>q;
	while(q--)
	{
		long long int t;
		cin>>t;
		long long int ans=INT_MIN;
		for(int i=0;i<n;i++)
		{
			ans=max(ans,(arr[i]+t)%m);
		}
		cout<<ans<<endl;
	}
return 0;
}