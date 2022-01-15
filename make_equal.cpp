#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>arr[i];
    	}
    	int small=INT_MAX;
    	int big=INT_MIN;
    	for(int i=0;i<n;i++)
    	{
    		small=min(small,arr[i]);
    		big=max(big,arr[i]);
    	}
    	cout<<big-small<<"\n";
    }
    return 0;
}