#include<bits/stdc++.h>
using namespace std;
#define ll long long
int prime[]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
ll int dp[10][80][2];
bool check(ll int sum)
{
	for(auto k:prime)
	{
		if(sum==k)
		{
			return true;
		}
	}
	return false;
}
ll int solve(string str,int pos=0,ll int sum=0,int tight=1)
{
	if(pos==str.length())
	{
		if(check(sum))
		{
			return 1;
		}
		else{
			return 0;
		}
	}
	else if(dp[pos][sum][tight]!=-1)
	{
		return dp[pos][sum][tight];
	}
	else if(tight==1)
	{
		ll int res=0;
		for(int i=0;i<=str[pos]-'0';i++)
		{
			if(i==str[pos]-'0')
			{
				res+=solve(str,pos+1,sum+i,1);
			}
			else{
				res+=solve(str,pos+1,sum+i,0);
			}
		}
		return dp[pos][sum][tight]=res;
	}
	else{
		ll int res=0;
		for(int i=0;i<=9;i++)
		{
			res+=solve(str,pos+1,sum+i,0);
		}
		return dp[pos][sum][tight]=res;
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll int t;
    cin>>t;
    while(t--)
    {
    	ll int l,r;
    	cin>>l>>r;
    	l--;
    	memset(dp,-1,sizeof(dp));
    	string s1=to_string(l);
    	ll int ans1=solve(s1);
    	memset(dp,-1,sizeof(dp));
    	string s2=to_string(r);
    	ll int ans2=solve(s2);
    	cout<<ans2-ans1<<"\n";
    }
    return 0;
}