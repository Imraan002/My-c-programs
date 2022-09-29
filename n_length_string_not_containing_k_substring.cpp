#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;

int dp[10001][5];

int rec(int level, int last_three)
{
	if(level==n)
		return 1;

	if(dp[level][last_three]!=-1)
		return dp[level][last_three];
	int ans = 0;

	if(level>=3 && last_three==2)
	{
		ans = rec(level+1,5);	
	}
	else{
		ans = rec(level+1,((last_three<<1)|0)&7) + rec(level+1,((last_three<<1)|1)&7);
	}

	return dp[level][last_three]=ans;


}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    cin>>n;

    string str = "0100";

    memset(dp,-1,sizeof(dp));
    
    cout<<rec(0,0);
    return 0;
}