#include<bits/stdc++.h>
using namespace std;
#define ll long long

int merge(int *arr,int n,int low,int mid,int high)
{
  
    int ans=0;
    int i=low;
    int j=mid+1;
    int k=0;
    int temp[high-low+1];

    
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];
           
        }
        else{
            temp[k++]=arr[j++];
            ans += mid-i+1;
        }
    }
    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while(j<=high)
    {
        temp[k++]=arr[j++];
    }

   
    for(int i=0;i<k;i++)
    {
        arr[low+i]=temp[i];
    }

    return ans;
    
}
int merge_sort(int *arr,int size,int low,int high)
{
    
    if(low<high)
    {
        int mid=(low+high)/2;

        int t1=merge_sort(arr,size,low,mid);
        int t2=merge_sort(arr,size,mid+1,high);

        int t3=merge(arr,size,low,mid,high);

        return t1+t2+t3;
    }
    
    return 0;

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

    int ans=merge_sort(arr,n,0,n-1);
    for(auto k:arr)
    {
        cout<<k<<" ";
    }
    cout<<"\n";
    cout<<ans;
    return 0;
}