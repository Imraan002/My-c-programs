#include <bits/stdc++.h>
using namespace std;
int Totient(int n)
{
	int res=n;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
		{
			res=res/i;
			res=res*(i-1);
			
		}
		while(n%i==0)
		{
			n=n/i;
		}
	}
	if(n>1)
	{
		
		res=res/n;
		res=res*n-1;
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;	
cout<<Totient(n);					//total numbers whose gcd with n is 1 from 1 to n 
return 0;
}