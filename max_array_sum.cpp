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
    
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    }

    int sum=INT_MIN;

    int i=0;
    int j=0;

    int curr_sum=0;
    while(i<n)
    {
    	j=i;
    	while(j<n && curr_sum>=0)
    	{
    		curr_sum+=arr[j];
    		sum=max(sum,curr_sum);
    		j++;
    	}
    	curr_sum=0;
    	i++;
    }
    cout<<sum;
    return 0;
}