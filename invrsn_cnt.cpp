#include<bits/stdc++.h>
using namespace std;
#define ll long long

void merge(int *arr,int n,int low,int mid,int high)
{
	// int a[mid-low+1];
	// int b[high-mid];

	// int k=0;
	// for(int i=low;i<=mid;i++)
	// {
	// 	a[k++]=arr[i];
	// }
	// k=0;

	// for(int i=mid+1;i<=high;i++)
	// {
	// 	b[k++]=arr[i];
	// }

	int i=low;
	int j=mid+1;
	int k=0;
	int temp[high-low+1];

	
	while(i<mid-low+1 && j<high-mid)
	{
		if(arr[i]<arr[j])
		{
			temp[k++]=arr[i++];
		}
		else{
			temp[k++]=arr[j++];
		}
	}
	while(i<mid-low+1)
	{
		temp[k++]=arr[i++];
	}
	while(j<high-mid)
	{
		temp[k++]=arr[j++];
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

		return;
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