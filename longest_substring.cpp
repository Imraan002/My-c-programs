#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1000][1000];
int LCS(int n,int m,string &str1,string &str2)
{
	int ans=0;
	
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			if(str1[i-1]==str2[j-1])
			{										//find the prefix of both the strings then find
				dp[i][j]=1+dp[i-1][j-1];			//the longest commom suffix
			}
			else{
				dp[i][j]=0;
			}
			ans=max(ans,dp[i][j]);
		}
	}
	return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    string str1,str2;
    cin>>str1>>str2;
    cout<<LCS(str1.size(),str2.size(),str1,str2);
    return 0;
}