#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
int wt[n];
for(int i=0;i<n;i++)
{
	cin>>wt[i];
}
int val[n];
for(int i=0;i<n;i++)
{
	cin>>val[i];
}
int cpty;
cin>>cpty;
vector<int> dp(cpty+1,0);
dp[0]=0;
for(int i=0;i<=cpty;i++)
{
	int maxans=0;
	for(int j=0;j<n;j++)
	{
		if(i>=wt[j])
		maxans=max(maxans,val[j]+dp[i-wt[j]]);
	}
	dp[i]=maxans;
}
cout<<dp[cpty];
return 0;
}