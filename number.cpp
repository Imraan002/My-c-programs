#include<bits/stdc++.h>
using namespace std;
#define ll long long

const ll int mod=1073741824;
int dp[1000009];

ll int find_div(int num)
{
	if(dp[num]!=-1)
	return dp[num]; 
	

	 ll int ans=0;

	for(int i=1;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			if(num/i!=i)
				ans+=2;
			else
				ans+=1;
		}
	}
	return dp[num]=ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    ll int a,b,c;
    cin>>a>>b>>c;
    
    memset(dp,-1,sizeof(dp));
    
  	ll int sum=0;
    for(int i=1;i<=a;i++)
    {
    	for(int j=1;j<=b;j++)
    	{
    		for(int k=1;k<=c;k++)
    		{
    			
    			sum+=find_div(i*j*k);
    		}
    	}
    }
   
    cout<<sum%mod<<"\n";
    return 0;
}