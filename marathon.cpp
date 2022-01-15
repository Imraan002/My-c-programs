#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int T;
	cin>>T;
	while(T--)
	{
		int ans=0;
		int D,d,a,b,c;
		cin>>D>>d>>a>>b>>c;
		int res=D*d;
		if(res>=10 and res<21)
			ans=a;
		else if(res>=21 and res<42)
			ans=b;
		else if(res>=42 )
			ans=c;
		else
			ans=0;
		cout<<ans<<endl;
	}
	
return 0;
}