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
	long long int n;
	cin>>n;
	bool ans=1;
	while(n!=1)
	{
		int rem=n%10;
		if(rem!=3 or rem!=7)
		{
			ans=0;
			break;
		}
		n=n/10;
	}
	if(ans==0)
		cout<<"BETTER LUCK NEXT TIME"<<endl;
	else
		cout<<"LUCKY"<<endl;
}
return 0;
}