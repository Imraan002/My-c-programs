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
vector<pair<int,int>> vec(n);
set<pair<int,int>> st;
for(int i=0;i<n;i++)
{
	cin>>vec[i].first>>vec[i].second;
	st.insert(vec[i]);
}
int arr_min=INT_MAX;
int arr_max=INT_MIN;
for(int i=0;i<n;i++)
{
	for(int j=0;j<n;j++)
		{
			auto p1=vec[i];
			auto p2=vec[j];
			if(p1.first==p2.first || p1.second==p2.second)
				continue;
			if(p1.first>p2.first)
				swap(p1,p2);
			int x1=p1.first;
			int y1=p2.second;
			int x2=p2.first;
			int y2=p1.second;
			if(st.count({x1,y1}) && st.count({x2,y2}))
			{
				int area=abs(p2.first-p1.first)*abs(p2.second-p1.second);
				arr_min=min(arr_min,area);
				arr_max=max(arr_max,area);
			}
		}
		if(arr_min==INT_MAX)
			cout<<-1<<endl;
		else
			cout<<(arr_max-arr_min)<<endl;
		return 0;
}
		}