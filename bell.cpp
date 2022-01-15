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
//	int sum=0;
	while(t--)
	{
		long long int D,d,p,q;
		cin>>D>>d>>p>>q;
		long long int n=D/d;
		long long int diff=q;
		long long int rem=D%d;
		long long int sum = d*((n*(2*p+(n-1)*diff))/2)+rem*(p+n*q);
		cout<<sum<<endl;
	}
	

return 0;
}