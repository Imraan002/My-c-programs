#include <bits/stdc++.h>
using namespace std;
bool isfeasible(int mid,int arr[],int n,int k)
{
	int pos=arr[0];
	int ele=1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]-pos>=mid)
		{
			pos=arr[i];
			ele++;
			if(ele==k)
				return true;
		}
	}
	return false;
}
int maximise(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int low=arr[0];
	int high=arr[n-1];
	int res=0;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(isfeasible(mid,arr,n,k))
		{
			res=max(res,mid);
			low=mid+1;
		}
		else
		{
			high=mid-1;
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
int n,k;
cin>>n;
int arr[n];
cin>>k;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cout<<maximise(arr,n,k)<<endl;

return 0;
}