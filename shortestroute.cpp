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
	int n,m;
	cin>>n>>m;
	vector<int> cities(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>cities[i];
	}
	vector<int> left;
	vector<int> right;
	for(int i=1;i<=n;i++)
	{
		if(cities[i]==2)
			left.push_back(i);
		else if(cities[i]==1)
			right.push_back(i);
	}
	while(m--)
	{
		int dest;
		cin>>dest;
		int leftdist=INT_MAX;
		int rightdist=INT_MAX;
		auto lt=lower_bound(left.begin(),left.end(),dest);
		if(lt!=left.end())
		{
			leftdist=(*lt)-dest;
		}
		auto rt=lower_bound(right.begin(),right.end(),dest);
		if(rt!=right.end() && *(rt)==dest )
		{
			rightdist=0;
		}
		else
		{
			if(rt!=right.begin())
			{
				rt--;
				rightdist=dest-(*rt);
			}
		}
		int ans=min(rightdist,leftdist);
		if(dest==1)
			ans=0;
		if(ans==INT_MAX)
			ans=-1;
		cout<<ans<<" ";

	}
	cout<<endl;
}
return 0;
}