#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int amount;
cin>>amount;
for(int i=0;i<3;i++)
{
	int k=0.1*amount;
	amount=amount-k;
}
cout<<amount;


return 0;
}