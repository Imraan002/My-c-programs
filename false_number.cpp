#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
long long int t;
cin>>t;
while(t--)
{
	string str;
	cin>>str;
	if(str[0]=='1')
	{
		str[0]='0';
	}
	cout<<'1'+str<<endl;
	
}
return 0;
}