#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int a,b;
cin>>a>>b;
a=a^b;
b=b^a;
a=a^b;
cout<<a<<" "<<b;
return 0;
}