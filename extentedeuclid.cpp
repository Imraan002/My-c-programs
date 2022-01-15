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
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif											//Ax+By=gcd(A,B)
int a,b;
cin>>a>>b;
triplet ans=extended_euclid(a,b);
cout<<"X = "<<ans.x<<" "<<"Y = "<<ans.y<<endl;

return 0;
}