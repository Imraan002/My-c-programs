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
    for(auto &x:arr)
    {
    	cin>>x;
    }
    int max_sum=INT_MIN;
    int cur_sum=0;							// Kadane's Algorithm
    for(int i=0;i<n;i++)
    {
    	cur_sum+=arr[i];
    	max_sum=max(max_sum,cur_sum);
    	if(cur_sum<0)
    	{
    		cur_sum=0;
    	}
    }
    cout<<max_sum<<"\n";

    return 0;
}