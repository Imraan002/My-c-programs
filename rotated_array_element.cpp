#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int low,int high,int key)
{
	if(low>high)
		return -1;
	int mid=(low+(high-low))/2;
	if(arr[low]<=arr[mid])
	{
		if(key>=arr[low] && key<=arr[mid])
			return solve(arr,low,mid-1,key);
		else
			return solve(arr,mid+1,high,key);
	}
	else
	{
		if(key>=arr[mid] && key<=arr[high])
			return solve(arr,mid+1,high,key);
	}
	return solve(arr,low,mid-1,key);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,key,rotate;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
cin>>key;

cout<<solve(arr,0,n-1,key);



return 0;
}