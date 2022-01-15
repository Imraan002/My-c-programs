#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios_base::sync_with_stdio(false);cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
	int n,a,b;
	cin>>n>>a>>b;
	int res=2*(180+n)-(a+b);
	cout<<res<<endl;
	
}
return 0;
}