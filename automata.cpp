#include<bits/stdc++.h>
using namespace std;
#define ll long long

int n;
int dp[10001][5];
int rec(int level,int match)
{
	
	if(match==4)
		return 0;

	if(level==n)
		return 1;

	if(dp[level][match]!=-1)
		return dp[level][match];
	int ans=0;

	if(match==0)
	{
		ans = rec(level+1,match+1) + rec(level+1,match);
	}
	else if(match==1)
	{
		ans = rec(level+1,match+1) + rec(level+1, match);
	}
	else if(match==2)
	{
		ans = rec(level+1,match+1) + rec(level+1, 0);
	}
	else if(match==3)
	{
		ans = rec(level+1,match+1) + rec(level+1, 2);
	}
	return dp[level][match]=ans;
}
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
		cin>>n;

		//string str = "0100";
		memset(dp,-1,sizeof(dp));
		
		cout<<rec(0,0)<<"\n";
	}


	return 0;
}