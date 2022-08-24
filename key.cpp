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
     int n,k;
     cin>>n>>k;
     ll int arr[n];

    
    for(int i=0;i<n;i++)
     {
      cin>>arr[i];
      
  }


  ll int ans=INT_MIN;
  
  ll int sum=0;
  for(int i=-1;i<n;i++)
  {
    long long now = sum;
    for(int j = i+1; j < min(n, i+32); j++)
    {
        int copy = arr[j];
        copy>>=j-i;
        now+=copy;
    }
    ans = max(ans, now);
    if(i+1 != n)
    {
        sum+=arr[i+1]-k;
    }
}
cout<<ans<<"\n";
}
return 0;
}