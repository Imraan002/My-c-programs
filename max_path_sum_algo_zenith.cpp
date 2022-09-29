#include<bits/stdc++.h>
using namespace std;
#define ll long long

int dp[1001][1001];
int arr[1001][1001];


ll int max_path(int row,int col)
{
	
	if(row<1 || col<1)
	{
		return 0;
	}

	if(row==1 && col==1)
		return arr[row][col];
	
	if(dp[row][col]!=-1)
		return dp[row][col];
	
	ll int ans = max(arr[row][col]+max_path(row-1,col),arr[row][col]+max_path(row,col-1));


	return dp[row][col]=ans;
}
void solve()
{
   ll int n,m;
   cin>>n>>m;

   

   for(int i=1;i<=n;i++)
   {
   	for(int j=1;j<=m;j++)
   	{
   		cin>>arr[i][j];
   		
   	}
   }

 	memset(dp,-1,sizeof(dp));

   ll int ans=max_path(n,m);
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