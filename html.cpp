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
	string str;
	cin>>str;
	bool res=true;
	int n=str.size();
	if(n>3)
	{
		 res=(str[0]=='<' && str[1]=='/' && str[n-1]=='>');
		for(int i=2;i<n-1;i++)
		{
			if(!islower(str[i]) && !isdigit(str[i]))
				res=false;
		}

	}
	else
		res=false;
	if(res==false)
		cout<<"Error"<<endl;
	else
		cout<<"Success"<<endl;
}
return 0;
}