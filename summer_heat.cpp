#include <bits/stdc++.h>
using namespace std;

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
		int x,y,X,Y;
		cin>>x>>y>>X>>Y;
		int res1=X/x;
		int res2=Y/y;
		cout<<res1+res2<<endl;
	}	
return 0;
}