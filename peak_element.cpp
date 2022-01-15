#include <bits/stdc++.h>
using namespace std;
int peak_element(int arr[],int low,int high,int n)
{
	if(low>high)
	{
		return -1;
	}
	int mid=(low+high)/2;
	if((mid==0 || arr[mid]>=arr[mid-1])&&(mid==n-1 || arr[mid]>=arr[mid+1]))
	{
		return mid;
	}
	else if(arr[mid]<arr[mid-1])
	{
		return peak_element(arr,low,mid-1,n);
	}
	else
		return peak_element(arr,mid+1,high,n);

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
int res=peak_element(arr,0,n-1,n);
cout<<arr[res];


return 0;
}