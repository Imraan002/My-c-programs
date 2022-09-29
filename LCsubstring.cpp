#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[1001][1001];
string str1,str2;

int LCsubstring(int i,int j)
{
	if(i==str1.size() || j==str2.size())
		return 0;

	if(dp[i][j]!=-1)
		return dp[i][j];
	int ans=0;
	if(str1[i]==str2[j])
	{
		ans = 1+LCsubstring(i+1,j+1);
	}
	return dp[i][j]=ans;
}
void solve()
{
   cin>>str1>>str2;

   memset(dp,-1,sizeof(dp));
    int ans=0;
   for(int i=0;i<str1.size();i++)
   {
   		for(int j=0;j<str2.size();j++)
   		{
   			ans=max(ans,LCsubstring(i,j));
   		}
   }
   cout<<ans<<"\n";
}
 
int main()
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