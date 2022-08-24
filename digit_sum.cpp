#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[20][100][2];
ll int solve(string & num, int dig, int sum,bool tight)
{
		ll int k=0;
		if(dig==0)
			return sum;
		if(dp[dig][sum][tight]!=-1)
			return dp[dig][sum][tight];
		int ub(0);

		if(tight)
		{
			ub = num[num.size()-dig]-'0';
		}
		else{
			ub=9;
		}
		for(int i=0;i<=ub;i++)
		{
			if(i==ub)
			{
				k+= solve(num, dig-1,sum+i,tight);
			}
			else{
				k+= solve(num,dig-1,sum+i,0);
			}
		}
		return dp[dig][sum][tight]=k;
}
int main()
{												//program to count the sum of the digits from 1 to R
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    memset(dp,-1,sizeof(dp));
    string str;
    cin>>str;
    cout<<solve(str,str.size(),0,1);
    return 0;
}