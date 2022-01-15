#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int k;
	cin>>k;
	int sum=0;
	int i;
	int t=0;
	int ans=INT_MAX;
	for( i=0;i<k;i++)
	{
		sum=sum+arr[i];
	}
	ans=min(ans,sum);
	for(int j=i;j<n;j++)
	{
		sum=sum+arr[j];
		sum=sum-arr[t++];
		ans=min(ans,sum);
	}
	cout<<ans;
return 0;
}