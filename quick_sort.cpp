#include<bits/stdc++.h>
using namespace std;
#define ll long long
void quick_sort(int arr[],int low,int high)
{
	if(high-low<1)
		return;
	int strt=low;
	int end=high;
	int mid=low+(high-low)/2;
	int pivot=arr[mid];
	while(strt<=end)
	{
		while(arr[strt]<pivot)
		{
			strt++;
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if(strt<=end)
		{
			int temp=arr[end];
			arr[end]=arr[strt];
			arr[strt]=temp;
				}
			strt++;
			end--;	
	}
	quick_sort(arr,low,end);
	quick_sort(arr,strt,high);
}
int main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quick_sort(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}