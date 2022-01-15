#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--)
{
	long long int a,b;
	cin>>a>>b;
	cout<<( (b&(b-1ll) )?"no":"yes");
	cout<<endl;
}
return 0;
}