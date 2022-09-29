#include<bits/stdc++.h>
using namespace std;
#define int long long int

int n;
int arr[1001];

int dp[1001][1001];

int gemstones(int i,int j)
{
	if(i>=j)
        return 1;

    
  if(dp[i][j]!=-1)
    return dp[i][j];


   int ans=INT_MAX;

   if(arr[i]==arr[j])
   {
        ans=gemstones(i+1,j-1);
   }
   else{
        for(int t=i;t<j;t++)
        {
            ans = min(ans,gemstones(i,t)+gemstones(t+1,j));
        }
   }

	return dp[i][j]=ans;
}
void solve()
{
   cin>>n;

   for(int i=0;i<n;i++)
   {
   		cin>>arr[i];
   }
   memset(dp,-1,sizeof(dp));
   int ans = gemstones(0,n-1);

   cout<<ans<<"\n";
}
 
signed main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}