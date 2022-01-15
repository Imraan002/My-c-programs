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
	long int n,a,b;
	cin>>n>>a>>b;
	long int sar=0;
	long int anu=0;
	while(n--)
	{
		string str;
		cin>>str;
		if(str[0]=='E' || str[0]=='Q' || str[0]=='U' || str[0]=='I' || str[0]=='N' || str[0]=='O' || str[0]=='X')
		{
			sar+=a;
		}
		else
		{
			anu+=b;
		}
	}
	if(sar>anu)
		cout<<"SARTHAK"<<endl;
	else if(anu>sar)
		cout<<"ANURADHA"<<endl;
	else
		cout<<"DRAW"<<endl;
}	
return 0;
}