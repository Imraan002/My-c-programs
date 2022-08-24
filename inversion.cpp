#include<bits/stdc++.h>
using namespace std;
#define ll long long

void merge(int *arr,int n,int low,int mid,int high)
{
	int a[mid-low+1];
	int b[high-mid];

	int k=0;
	for(int i=low;i<=mid;i++)
	{
		a[k++]=arr[i];
	}
	k=0;

	for(int i=mid+1;i<=high;i++)
	{
		b[k++]=arr[i];
	}

	int temp[high-low+1];

	int i=0;
	int j=0;
	k=0;
	while(i<mid-low+1 && j<high-mid)
	{
		if(a[i]<b[j])
		{
			temp[k++]=a[i++];
		}
		else{
			temp[k++]=b[i++];
		}
	}
	while(i<mid-low+1)
	{
		temp[k++]=a[i++];
	}
	while(j<high-mid)
	{
		temp[k++]=b[j++];
	}

	for(int i=0;i<k;i++)
	{
		arr[low+i]=temp[i];
	}
}
void merge_sort(int *arr,int size,int low,int high)
{
	if(low>=high)return;

	while(low<high)
	{
		int mid=(low+high)/2;

		merge_sort(arr,size,low,mid);
		merge_sort(arr,size,mid+1,high);

		merge(arr,size,low,mid,high);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int arr[]={4,52,1,3,5};

    merge_sort(arr,5,0,4);
    for(auto k:arr)
    {
    	cout<<k<<" ";
    }
    return 0;
}