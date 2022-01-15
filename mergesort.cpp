#include<bits/stdc++.h>
using namespace std;
#define ll long long
void merge(int *arr,int l,int mid,int r)
{
	int size=(r-l)+1;
	int temp[size];
	int i=l;
	int j=mid+1;
	int k=l;
	while(i<=mid && j<=r)
	{
		if(arr[i]<arr[j])
		{
			temp[k]=arr[i];
			i++;
			k++;
		}
		else{
			temp[k]=arr[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		temp[k]=arr[i];
		k++;
		i++;
	}
	while(j<=r)
	{
		temp[k]=arr[j];
		k++;
		j++;
	}
	for(int t=l;t<=r;t++)
	{
		arr[t]=temp[t];
	}
}
void partition(int *arr,int l,int r)
{
	if(r-l<1)
		return;
	
		int mid=l+(r-l)/2;
		partition(arr,l,mid);
		partition(arr,mid+1,r);
		merge(arr,l,mid,r);
	
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
	partition(arr,0,n-1);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}