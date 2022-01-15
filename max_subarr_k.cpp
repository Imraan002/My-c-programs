#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int k,int x)
{
	int sum=0;
	int j=0;
	int res=INT_MIN;
	for(int i=0;i<k;i++)
	{
		sum+=arr[i];
	}
	if(sum<x)
	{
		res=sum;
	}
	for(int i=k;i<n;i++)
	{
		sum+=arr[i];
		sum-=arr[j++];
		if(sum<x)
		res=max(res,sum);

	}
	if(res<0)
		return -1;
	else
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,k,x;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cin>>k;
cin>>x;
int ans=solve(arr,n,k,x);
if(ans==-1)
	cout<<"doesn't exist";
else
	cout<<ans;


return 0;
}