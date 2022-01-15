#include <bits/stdc++.h>
using namespace std;
#define long long int
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
	int d,x,y,z;
	cin>>d>>x>>y>>z;
	int ans=INT_MAX;
	int way1,way2;
	way1=7*x;
	way2=y*d+(7-d)*z;
	cout<<max(way1,way2)<<endl;
}
return 0;
}