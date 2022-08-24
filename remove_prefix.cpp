#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  
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
    map<int,int> mp;

    int ans=0;

    mp.insert({arr[n-1],1});

    for(int i=n-2;i>=0;i--)
    {
        if(mp.find(arr[i])!=mp.end())
        {
            ans=i+1;
            break;
        }
        else{
            mp.insert({arr[i],1});
        }
    }
    cout<<ans<<"\n";
  }
return 0;
}