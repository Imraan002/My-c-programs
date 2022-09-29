#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n,m;

int arr[1003][1003];

int dp[1003][1003];

int max_area(int r,int c)
{
	

	if(arr[r][c]==0)
		return 0;

	if(r>=n || c>=m)
	{
		return INT_MAX;
	}

	if(r==n-1 || c==m-1)
	{
		return arr[r][c];
	}
	if(dp[r][c]!=-1)
		return dp[r][c];

	int ans = 1+min(max_area(r+1,c+1),min(max_area(r+1,c),max_area(r,c+1)));

	return dp[r][c]=ans;
}
void solve()
{
   cin>>n>>m;

   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		cin>>arr[i][j];
   		dp[i][j]=-1;
   	}
   }

   int ans=0;

   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<m;j++)
   	{
   		ans=max(ans,max_area(i,j));
   	}
   } 

   cout<<ans*ans<<"\n";

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