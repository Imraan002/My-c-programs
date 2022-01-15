#include <bits/stdc++.h>
using namespace std;
void heapify(int arr[],int idx,int n)
{
	if(idx>=n)
	{
		return;
	}
	int lft=2*idx+1;
	int rht=2*idx+2;
	int large=idx;
	if(lft<n && arr[large]<arr[lft])
	{
		large=lft;
	}
	if(rht<n && arr[large]<arr[rht])
	{
		large=rht;
	}
	if(large!=idx)
	{
		swap(arr[idx],arr[large]);
		heapify(arr,large,n);
	}
}
void heapsort(int arr[],int n)
{
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,i,n);
	}
	for(int i=n-1;i>=0;i--)
	{
		swap(arr[0],arr[i]);
		heapify(arr,0,i);
	}
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
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
heapsort(arr,n);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}
return 0;
}