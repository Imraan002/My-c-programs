#include<bits/stdc++.h>
using namespace std;
#define ll long long
char solve(vector<char> &arr,int target,int n)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		
		if(arr[mid]<=target)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}

		return arr[low%n];
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
    vector<char> arr(n);
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }
    char target;
    cin>>target;
    cout<<solve(arr,target,n);
    return 0;
}