#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt=0;
int merge(int n,int arr[],int low,int mid,int high)
{
	
	int cnt(0);

	int j = mid+1; 
	for(int i=low;i<=mid;i++)
	{
		while(j<=high && 2*arr[j]<arr[i])
			{
				j++;
			}

		cnt += j-(mid+1);
	}

	int i=low;

	 j=mid+1;

	int brr[high-low+1];

	int k=0;

	while(i<=mid && j<=high)
	{
		if(arr[i]<arr[j])
		{
			brr[k++]=arr[i++];


		}
		else{
			brr[k++]=arr[j++];
			
		}
	}

	while(i<=mid)
	{
		brr[k++]=arr[i++];
	}
	while(j<=high)
	{
		brr[k++]=arr[j++];
	}


	
    for(int i=0;i<k;i++)
    {
        arr[low+i]=brr[i];
    }

    return cnt;
}
int merge_sort(int n, int arr[],int low,int high)
{
	if(high==low)
		return 0 ;

	int inv(0);
	if(low<high)
	{
		int mid = (low+high)/2;

		inv += merge_sort(n,arr,low,mid);
		inv += merge_sort(n,arr,mid+1,high);

		inv += merge(n,arr,low,mid,high);
		
	}
	return inv;
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

    int k=merge_sort(n,arr,0,n-1);
    
    
   cout<<k;
    return 0;
}