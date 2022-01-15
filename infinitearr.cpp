#include <bits/stdc++.h>
using namespace std;
int search(vector<int> &v,int low,int high,int k)
{
	if(high>=low)
	{
		int mid=(low+high)/2;
		if(v[mid]==k)
			return mid+1;
		else if(v[mid]>k)
			return search(v,low,mid-1,k);
		return search(v,mid+1,high,k);
	}
	
	return -1;
}
int infinite(vector<int> &arr,int low,int k)
{
	
	low=0;
	int high=1;
	while(arr[high]<k)						//search element in a sorted infinite array
	{
		low=high;
		high=2*high;
	}
	return search(arr,low,high,k);
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
sort(arr.begin(),arr.end());
int key;
cin>>key;
cout<<infinite(arr,0,key);
return 0;
}