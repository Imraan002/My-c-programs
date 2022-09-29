#include<bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define sp(x) fixed<<setprecision(x)
#define ull unsigned long long
#define int long long

int n,m,k;

int bus[100100];
int flight[100100];

int dp[10100][10100];

int rec(int level,int flights_used)
{
	if(level<1)
		return INT_MAX;

	if(level==1 )
		return 0;

	if(dp[level][flights_used]!=-1)
		return dp[level][flights_used];

	int ans = rec(level-1,flights_used)+bus[level-1];

	for(int j=1;j<=k;j++)
	{
		ans =min(ans,rec(level-j,flights_used-1)+flight[level-j]+flight[level]);
	}
	return dp[level][flights_used] = ans;
}
void solve(){

	memset(dp,-1,sizeof(dp));
	cin>>n>>m>>k;

	for(int i=1;i<=n;i++)
	{
		cin>>bus[i];
	}

	for(int i=1;i<=n;i++)
	{
		cin>>flight[i];
	}

	int ans = rec(n,m);
	cout<<ans<<"\n";

}



signed main()
{
    #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);              //Imraan
    #endif

        fast_io;
        int t;
        cin>>t;
        
        while(t--)
        {

        	solve();    

        }


        return 0;
    }