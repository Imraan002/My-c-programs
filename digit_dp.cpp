#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1001][1000][2];
ll int find_nos(string &str,int num_dig,int sum,bool tight)
{
	if(sum<0)
		return 0;
	if(num_dig==1)
	{
		if(sum>=0 && sum<=9)
			return 1;
		else
			return 0;									//count the nos whose digit sum is sum form 1 to R
	}
	if(dp[num_dig][sum][tight]!=-1)
		return dp[num_dig][sum][tight];
	ll int ans=0;
	int ub(0);
	if(tight==1)
	{
		ub=str[str.size()-num_dig];
	}
	else{
		ub=9;
	}
	for(int i=0;i<=ub;i++)
	{
		if(i==ub)
		{
			ans+=find_nos(str,num_dig-1,sum-i,1);
		}
		else{
			ans+=find_nos(str,num_dig-1,sum-i,0);
		}
	}
	return dp[num_dig][sum][tight]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    memset(dp,-1,sizeof(dp));
	string str="1123"; 
    cout<<find_nos(str,str.size(),4,1);
    return 0;
}