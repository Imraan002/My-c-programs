#include <bits/stdc++.h>
using namespace std;
struct triplet{
	int x;
	int y;
	int gcd;
};		
triplet extended_euclid(int a,int b)
{
	if(b==0)
	{
		triplet res;
		res.x=1;
		res.y=0;
		res.gcd=a;
		return res;
	}
	triplet smallans=extended_euclid(b,a%b);
	triplet res;
	res.x=smallans.y;
	res.y=smallans.x-((a/b)*smallans.y);
	return res;
}					
int mmi(int a,int m)
{
	triplet ans=extended_euclid(a,m);
	return ans.x;
}
int main()
{
	#ifndef ONLINE_JUDGE							//(A*B)%m=1
													//modulo multiplicative inverse
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int a,m;
cin>>a>>m;
cout<<"Value of B = "<<mmi(a,m)<<endl;
return 0;
}