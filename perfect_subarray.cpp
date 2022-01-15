#include <bits/stdc++.h>
using namespace std;
bool isperfect(int num)
{
	int sum=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
		return true;
	else
		return false;
}
int solve(int arr[],int n,int k)
{
	int sum=0;
	int ans=INT_MIN;
	int i=0;
	for(int i=0;i<n;i++)
	{
		if(isperfect(arr[i]))
		{
			arr[i]=1;
		}
		else
			arr[i]=0;
	}
	for (int j = 0; j < k; ++j)
	{
		sum+=arr[j];
	}
	ans=max(ans,sum);
	for (int t = k; t < n; ++t)
	{
		sum=sum+arr[t];
		sum=sum-arr[i++];
		ans=max(ans,sum);
	}
	return ans;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
int k;
cin>>k;
cout<<solve(arr,n,k);
return 0;
}