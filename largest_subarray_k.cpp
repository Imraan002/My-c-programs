#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int k)
{
	unordered_map<int,int>mp;
	mp.insert({0,1});
	int sum=0;
	int len=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum==k)
		{
			len=i+1;
		}
		if(mp.find(sum)==mp.end())
		{
			mp.insert({sum,i});
		}
		if(mp.find(sum-k)!=mp.end())
		{
			len=max(len,i-mp[sum-k]);
		}
	}
	return len;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,k;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cin>>k;
int res=solve(arr,n,k);
cout<<res;
return 0;
}