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
	int g,c;
	cin>>g>>c;
	cout<<(c*c)/(2*g)<<endl;
}
return 0;
}