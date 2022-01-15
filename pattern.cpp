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
	int n;
	cin>>n;
	int j;
	for(int i=1;i<=n;i++)
	{
		for( j=1;j<=i;j++)
		{
			cout<<j;
			if(i>1 and i<=n )
		{
			for(int k=1;k<=j;k++)
			{
				if(i!=j)
				cout<<"*";
			}
		}
		}
		
		cout<<"\n";
	}
}
return 0;
}