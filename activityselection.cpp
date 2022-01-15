#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	return p1.second<p2.second;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<pair<int,int>>v;
for(int i=0;i<n;i++)
{
	int x,y;
	cin>>x>>y;
	pair<int,int>p;
	p=make_pair(x,y);
	v.push_back(p);
}
sort(v.begin(),v.end(),cmp);
int ans=1;
int end=v[0].second;
for(int i=1;i<n;i++)
{
	if(v[i].first>=end)
	{
		ans++;
		end=v[i].second;
	}
}
cout<<ans;
return 0;
}