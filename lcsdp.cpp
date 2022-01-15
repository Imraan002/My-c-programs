#include <bits/stdc++.h>
using namespace std;
const int N=1000;
int dp[N][N];
int lcs(string s1,string s2,int n,int m)
{
	for(int i=0;i<n+1;i++)
	{
		for(int j=0;j<m+1;j++)
		{
			if(i==0 || j==0)
				dp[i][j]=0;
		}
	}
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{								//memoization
			if(s1[i]==s2[j])
				dp[i][j]=1+dp[i-1][j-1];
			else
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		}
	}
	return dp[n][m];

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string s1,s2;
cin>>s1>>s2;
cout<<lcs(s1,s2,s1.size(),s2.size());
return 0;
}