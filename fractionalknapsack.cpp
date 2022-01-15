#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>p1,pair<int,int>p2)
{
	double s=p1.first/p1.second;
	double t=p2.first/p2.second;
	return s>t;
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
		pair<int,int>p=make_pair(x,y);
		v.push_back(p);
	}
	int w;
	cin>>w;
	sort(v.begin(),v.end(),cmp);
	for(auto ele:v)
	{
		cout<<ele.first<<" "<<ele.second<<endl;
	}
	int ans=0;
	for(int i=0;i<n;i++)
	{
		if(w>=v[i].second)
		{
			ans+=v[i].first;
			w=w-v[i].second;
		}
		else
		{	int val=(v[i].first/v[i].second)*w;
				ans+=val;
				w=0;
				break;

		}
		
	}
	cout<<ans<<endl;
return 0;
}