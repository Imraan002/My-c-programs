#include <bits/stdc++.h>
using namespace std;
double eps=1e-7;
double mult(double mid,int k)
{
	double res=1;
	for(int i=0;i<k;i++)
	{
		res*=mid;
	}
	return res;
}
double squarerooot(int n,int k)
{
	double low=1;
	double high=n;
	while(high-low>eps)
	{
		double mid=(low+high)/2;
		if(mult(mid,k)<n)
		{
			low=mid;				//root of any number
		}
		else 
		{
			high=mid;
		}
	}
	return low;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int k;
cin>>k;
cout<<squarerooot(n,k)<<endl;
return 0;
}