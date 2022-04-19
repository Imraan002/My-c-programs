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
     int max_cnt=0;
     for(int i=0;i<n;i++)
     {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(arr[i]==arr[j] && j<n)
        {
            j++;
        }
        max_cnt=max(max_cnt,j-i);
    }

    int ans=0;
    while(max_cnt<n)
    {
        int rem=n-max_cnt;
        int to_add=max_cnt;
         ans++;
        ans+=min(to_add,rem);
        max_cnt+=min(to_add,rem);
    }
    cout<<ans<<"\n";
}
return 0;
}