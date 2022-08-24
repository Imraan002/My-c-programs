#include<bits/stdc++.h>
using namespace std;
#define ll long long
int cnt(string &num, int pos, bool tight)
{
	if(tight==0)
	{
		return pow(10,num.size()-pos);
	}

	if(pos==num.size())
		return 1;

	int ub = num[pos]-'0';
	int ans=0;
	for(int i=0;i<=ub;i++)
	{
		if(i==ub)
		{
			ans+=cnt(num,pos+1,1);
		}
		else{
			ans+=cnt(num,pos+1,0);
		}
	}
	return ans;
}
ll int solve(string &num, int pos, bool tight )
{

	
	if(pos==num.size())
		return 0;

	ll int ans=0;
	ll int ub=0;

	if(tight==1)
	{
		ub=num[pos]-'0';
	}
	else{
		ub=9;
	}
	for(int i=0;i<=ub;i++)
	{
		if(i==ub)
		{
			ans+= i*cnt(num,pos+1,1);
			ans+=solve(num,pos+1,1);
			
		}
		else{
			ans+=i*cnt(num,pos+1,0);
			ans+=solve(num,pos+1,0);
			
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
    
    ll int t;
    cin>>t;

    while(t--)
    {
    	ll int left,right;
    	cin>>left>>right;


    	if(left!=0)
    		left--;

    	string l = to_string(left);
    	string r = to_string(right);

   		cout<<solve(r,0,1)-solve(l,0,1)<<"\n";
    }
    return 0;
}