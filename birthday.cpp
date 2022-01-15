#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int t;
cin>>t;
while(t--)
{
	int n,k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int res1=0;
	int res2=0;
	for(int i=1;i<=k;i++)
	{
		for(int j=n-1;j>=0;j-k)
		{
			res1=res1+arr[j];
		}

	}
	for(int i=1;i<=k;i++)
	{
		
		for(int j=n-1;j>=0;j-k)
		{
			res2=res2+arr[j-1]+arr[j-2];
		}
	}
	cout<<max(res1,res2)<<endl;
}
return 0;
}