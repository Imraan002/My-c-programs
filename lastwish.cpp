#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,pair<int,int>> p1,pair<int,pair<int,int>> p2)
{
	int s1=p1.second.first+p1.second.second;
	int s2=p2.second.first+p2.second.second;
	if(s1!=s2)
		return s1<s2;
	else
		return p1.second.first<p2.second.first;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int T;
cin>>T;
while(T--)
{
	int n;
	cin>>n;
	vector<pair<int,pair<int,int>>> arr(n);
	for(int i=0;i<n;i++)
	{
		arr[i].first=i;
		cin>>arr[i].second.first>>arr[i].second.second;
	}
	sort(arr.begin(),arr.end(),cmp);
	vector<int> ans(n);
	for(int i=0;i<n;i++)
	{
		ans[arr[i].first]=i;
	}
	for(auto ele:ans)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}
return 0;
}