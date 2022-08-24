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
    	for(int i=n-1;i>=0;i--)
    	{
    		if(arr[i]!=0)
    		{
    			cout<<i<<"\n";
    			break;
    		}
    	}
    }
    return 0;
}