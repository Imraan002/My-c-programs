#include <bits/stdc++.h>
using namespace std;
int searchrotated(vector<int> &arr,int low,int high,int key)
{
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==key)
			return mid+1;
		if(arr[low]<=arr[mid])
			{
				if(key>=arr[low] && key<arr[mid])
				{
					high=mid-1;
				}
				else
				{
					low=mid+1;
				}
			}
			else
			{
				if(key>arr[mid] && key<=arr[high])
				{
					low=mid+1;
				}
				else
				{
					high=mid-1;
				}
			}
	}
	return -1;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
int k;
cin>>k;
cout<<searchrotated(arr,0,n-1,k);
return 0;
}