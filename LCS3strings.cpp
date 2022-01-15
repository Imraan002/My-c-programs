#include <bits/stdc++.h>
using namespace std;
const int N=100;
int dp[N][N][N];
int LCS(string s1,string s2,string s3,int size1,int size2,int size3)
{
	if(size1==0 || size2==0 || size3==0)
	{
		return 0;
	}
	if(dp[size1][size2][size3]!=-1)
		return dp[size1][size2][size3];
	if(s1[size1-1]==s2[size2-1] && s2[size2-1]==s3[size3-1])
	{
		return dp[size1][size2][size3] = 1+LCS(s1,s2,s3,size1-1,size2-1,size3-1);
	}
	int l1=LCS(s1,s2,s3,size1-1,size2,size3);
	int l2=LCS(s1,s2,s3,size1,size2-1,size3);
	int l3=LCS(s1,s2,s3,size1,size2,size3-1);
	return dp[size1][size2][size3]=max({l1,l2,l3});

}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
string s1,s2,s3;
cin>>s1>>s2>>s3;
memset(dp,-1,sizeof(dp));
cout<<LCS(s1,s2,s3,s1.size(),s2.size(),s3.size());
return 0;
}