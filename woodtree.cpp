#include <bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int tree[N];
long long int m;
bool isfeasible(int h,int n,int m)
{
	long long int wood=0;
	for(int i=0;i<n;i++)
	{
		if(tree[i]>=h)
		{
			wood+=tree[i]-h;
		}
	}
	return wood>=m;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{
	cin>>tree[i];
}
long long int low=0,high=*max_element(tree,tree+n),mid;
while(high-low>1)
{
	long long int mid=(low+high)/2;
	if(isfeasible(mid,n,m))
	{
		low=mid;
	}
	else
	{
		high=mid-1;
	}
}
if(isfeasible(high,n,m))
cout<<high<<endl;
else
cout<<low<<endl;
return 0;
}