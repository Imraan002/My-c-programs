#include<bits/stdc++.h>
using namespace std;
#define ll long long
void merge(int *arr,int l,int m,int r)
{
	int size=(r-l)+1;
        int temp_arr[size];
         int i=l;
         int j=m+1;
         int k=0;
         while(i<=m && j<=r)
         {
             if(arr[i]<arr[j])
             {
                 temp_arr[k]=arr[i];
                 k++;
                 i++;
             }
             else{
                 temp_arr[k]=arr[j];
                 k++;
                 j++;
             }
         }
         while(i<=m)
         {
             temp_arr[k]=arr[i];
             i++;
             k++;
         }
          while(j<=r)
         {
             temp_arr[k]=arr[j];
             j++;
             k++;
         }
         for(int t=0;t<size;t++)
         {
             arr[l+t]=temp_arr[t];
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