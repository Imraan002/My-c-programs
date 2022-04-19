#include<bits/stdc++.h>
using namespace std;
#define ll long long
void merge(int arr[],int low,int mid,int high)
{
    int temp[high-low+1];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
        {
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=high)                                                              //merge_sort
    {
        temp[k++]=arr[j++];
    }
    int z=0;
    for(int t=low;t<=high;t++)
    {
        arr[t]=temp[z++];
    }
}
void merge_sort(int arr[],int low,int high)
{
    if(low==high)
        return;
    if(high-low>=1)
    {
        int mid=low+(high-low)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
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
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}