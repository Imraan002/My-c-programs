#include<bits/stdc++.h>
using namespace std;
#define int long long

string str1,str2,str3;

int dp[101][101][101];

int LCS(int i,int j,int k)
{
    if(i>=str1.size() || j>=str2.size() || k>=str3.size())
    {
        return 0;
    }

    if(dp[i][j][k]!=-1)
        return dp[i][j][k];
    int ans = 0;

    ans = max(ans,LCS(i+1,j,k));
    ans = max(ans,LCS(i,j+1,k));
    ans = max(ans,LCS(i,j,k+1));

    if(str1[i]==str2[j] && str1[i]==str3[k] )
    {
        ans = max(ans,1+LCS(i+1,j+1,k+1));
    }
    return dp[i][j][k]=ans;
}
void solve()
{
  
   cin>>str1>>str2>>str3;

   memset(dp,-1,sizeof(dp));

   int ans = LCS(0,0,0);

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