#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		cin>>a>>b;

		 if(gcd(a,b)>1)
		{
			cout<<0<<endl;
		}
		else if(gcd(a,b+1)>1 || gcd(a+1,b)>1)
		{
			cout<<1<<endl;
	
		}
		else
			cout<<2<<endl;
	}
	return 0;
}