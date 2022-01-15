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
    ll int t;
    cin>>t;
    while(t--)
    {
      ll int n;
      cin>>n;
      vector<ll int> arr(n);
      for(ll int i=0;i<n;i++)
      {
        cin>>arr[i];
      }
      sort(arr.begin(),arr.end());
      ll int moves=INT_MAX;
      bool ans=false;
      for(ll int i=0;i<n;i++)
      {
        if(i==0)
        {
          moves=min(moves,abs(arr[i+1]-arr[n-1]));
          if(abs(arr[i+1]-arr[n-1])==0)
          {
            ans=true;
            break;
          }
        }
        else if(i==n-1)
        {
          moves=min(moves,abs(arr[i-1]-arr[0]));
          {
            if(abs(arr[i-1]-arr[0])==0)
            {
              ans=true;
              break;
            }
          }
        }
        else{
          moves=min(moves,abs(abs(arr[i+1]-arr[n-1])-abs(arr[i]-arr[0])));
          if(abs(arr[i+1]-arr[n-1])==abs(arr[i]-arr[0]))
          {
            ans=true;
            break;
          }
        }
      }
      if(ans==true)
      {
        cout<<0<<"\n";
      }
      else{
        cout<<moves<<"\n";
      }
    }
    return 0;
}