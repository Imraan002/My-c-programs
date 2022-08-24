#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll int ans[1000010];
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int n;
    cin>>n;

   ll int arr[n];

    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];

    	ans[arr[i]]+=1;
    }

    for(int i=1;i<1000009;i++)
    {
    	for(int j=2*i;j<1000009;j+=i)
    	{
    		ans[i]+=ans[j];
    	}
    	ans[i]=(ans[i]*(ans[i]-1))/2;
    }

    for(int i=1000008;i>=1;i--)
    {
    	for(int j=2*i;j<1000010;j+=i)
    	{
    		ans[i]-=ans[j];
    	}
    }
    
    cout<<ans[1]<<"\n";

   
    return 0;
}