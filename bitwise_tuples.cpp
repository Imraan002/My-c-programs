#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mod=1e9+7;
int mult(ll int a, ll int b )
{
	 ll int res=(a*b);
	 if(res>mod)
	 	return  res%mod;
	 	else
	 	return res; 

}
int power(int x,int y)
{
	if(y==0)
		return 1;
	if(y==1)
		return x%mod;
	int ans=power(x,y/2)%mod;
	ans=mult(ans,ans);
	if(y&1)
	{
		ans=mult(ans,x);
	}
		return ans;
	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int t;
cin>>t;
while(t--)
{
	int n,m;
	cin>>n>>m;
	cout<<power((power(2,n)-1)%mod,m)<<endl;;
}
return 0;
}