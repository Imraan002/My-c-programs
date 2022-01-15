#include <bits/stdc++.h>
using namespace std;
void printbinary(int n)
{
	for(int i=31;i>=0;i--)
	{
		int k=(n>>i)&1;
		cout<<k;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int> masks(n,0);
for(int i=0;i<n;i++)
{
	int days;
	cin>>days;
	int num=0;
	for(int j=0;j<days;j++)
	{
		int k;
		cin>>k;
		num=num|(1<<k);
	}
	masks[i]=num;
}
int res=INT_MIN;
int p1=0;
int p2=0;
for(int i=0;i<n;i++)
{													//workers with max common days
	for(int j=i+1;j<n;j++)							//using bitmasking
	{
		int intersect=masks[i]&masks[j];
		int common=__builtin_popcount(intersect);
		if(common>res)
		{
			res=common;
			p1=i;
			p2=j;
		}
		
	}
}
cout<<p1<<" "<<p2<<" "<<res;
return 0;
}