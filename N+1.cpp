#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll int binary_expo(ll int a,ll int b)
{
	ll int ans=1;
	while(b)
	{
		if(b&1)
		{
			ans=ans*a;
		}
		a=a*a;
		b=b>>1;
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
   ll int t;
    cin>>t;
    while(t--)
    {
    	ll int n;
    	cin>>n;
    	vector<ll int>ans;
    	if(n==1)
    	{
    		cout<<1<<" "<<1<<"\n";
    		continue;
    	}
    	for(ll int i=1;i<=n;i++) 
    	{
    		if(i==n)
    		{
    			ans.push_back(i-1);
    		}
    		else
    			ans.push_back(i);
    	}
    	ll int sum=accumulate(ans.begin(),ans.end(),0);
    	ll int temp=binary_expo(2,n);
    	ans.push_back(temp-sum);
    	for(auto k:ans)
    	{
    		cout<<k<<" ";
    	}cout<<"\n";

    }
    return 0;
}