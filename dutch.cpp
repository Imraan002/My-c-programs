#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int arr[],int n)
{
	int low=0;
	int high=n-1;

	int mid =low;
	while(mid<=high){

		if(arr[mid]==0)
		{
			swap(arr[mid],arr[low]);
			low++;
			mid++;
		}
		else if(arr[mid]==2)
		{
			swap(arr[mid],arr[high]);
			high--;
			
		}
		else if(arr[mid]==1)
		{
			mid++;
		}
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int arr[]={1,1,0,2};

    solve(arr,4);
    for(int i=0;i<4;i++)
    {
    	cout<<arr[i];
    }
    return 0;
}