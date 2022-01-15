#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int wt[n];
int val[n];
for(int i=0;i<n;i++)
{
	cin>>wt[i];
}
for(int i=0;i<n;i++)
{
	cin>>val[i];
}
int cpty;
cin>>cpty;
vector<vector<int>> dp(n+1,vector<int>(cpty+1,0));
for(int i=1;i<dp.size();i++)
{
	for(int j=1;j<dp[i].size();j++)
	{
		if(j>=wt[i-1])
		{																	//0/1 knapsack
			if(dp[i-1][j-wt[i-1]]+val[i-1]>dp[i-1][j])
				dp[i][j]=dp[i-1][j-wt[i-1]]+val[i-1];
			else
				dp[i][j]=dp[i-1][j];
		}
		else
		{
			dp[i][j]=dp[i-1][j];
		}
	}
}
cout<<dp[n][cpty];
return 0;
}