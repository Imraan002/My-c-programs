#include <bits/stdc++.h>
using namespace std;
bool isfeasible(int mid,int arr[],int n,int m)
{
	int stu=1;
	int sum=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>mid)
		{
			return false;
		}
		else if(sum+arr[i]>mid)
		{
			stu++;
			if(stu>m)
			{
				return false;
			}
			sum=arr[i];
		}
		else
		{
			sum+=arr[i];
		}
	}
	return true;
}
int minimumpage(int arr[],int n,int m)
{
	int low=0;
	int sum=0;
	int mid;
	int res=INT_MAX;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int high=sum;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(isfeasible(mid,arr,n,m))
		{
			res=min(res,mid);
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cin>>m;
cout<<minimumpage(arr,n,m);


return 0;
}