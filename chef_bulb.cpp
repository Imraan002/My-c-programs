#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	int ans;
	while(t--)
	{
		ll n,p,k;
		cin>>n>>p>>k;
		if(p==k)
		{
			if(p==0 && k==0)
			{
				ans=1;
			}
			else
			{
				ans=2;
			}
		
		}
		else if(p<k)
		{
			if(p==0)
			{
				ans=1;
			}
			else if((n-k)>(p-1))
			{
				ans=2*p+1;
			}
			else
			{
				ans=(p+1)+(n-k);
			}
		}
		else if(p>k)
		{
			if(k==0)
			{
				ans=p+1;
			}
			else {
				ans=(p-(k-1))+((p-1)-k)+1+1;
			}
		}
		cout<<ans<<endl;
		}
		
	
	return 0;
}