#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[20][2][2][2];
ll int solve(string &num, int dig, bool even, bool leading_zero, bool tight)
{
	if(dig==0)
		return 1;
	ll int ans=0;
	
	if(dp[dig][even][leading_zero][tight]!=-1)
		return dp[dig][even][leading_zero][tight];
	if(even)
	{
		vector<int> temp = {0,2,4,6,8};
		ll int ub=tight?num[num.size()-dig]-'0':9;
	
		for(int k:temp)
		{
			if(k<=ub)
			{
				
					ans+=solve(num,dig-1,0,0,tight & (k==ub));
				
			}
			

		}
		
	}
	else{

		vector<int> temp = {1,3,5,7,9};
		ll int ub=tight?num[num.size()-dig]-'0':9;
		if(leading_zero==1)
		{
			ans+= solve(num,dig-1,0,1,0);
		}
	
		for(int k:temp)
		{
			if(k<=ub)
			{
				
					ans+=solve(num,dig-1,1,0,tight & (k==ub));
				
			}
			
		}
		
	}
	return dp[dig][even][leading_zero][tight]=ans;
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
    for(int i=1;i<=t;i++)
    {
    	ll int L,R;
    	cin>>L>>R;
    	L--;
    	string l,r;
    	l = to_string(L);

    	r = to_string(R);
    
    	memset(dp,-1,sizeof(dp));
    	ll int lr = solve(l,l.size(),0,1,1);
    	memset(dp,-1,sizeof(dp));
	  	ll int rr = solve(r,r.size(),0,1,1);
	  	cout<<"Case "<<"#"<<i<<": "<<(rr-lr)<<"\n";
    	
    }
    return 0;
}