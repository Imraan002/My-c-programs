#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int k;
cin>>k;
vector<vector<int>>v(k);
for(int i=0;i<k;i++)
{
	int size;
	cin>>size;
	v[i]=vector<int>(size);
	for(int j=0;j<size;j++)
	{
		cin>>v[i][j];
	}
}
vector<int>idx(k,0);
vector<int>ans;
priority_queue<pii,vector<pii>,greater<pii>> pq;
for(int i=0;i<k;i++)
{
	pq.push({v[i][0],i});
}
while(!pq.empty())
{
	pii p=pq.top();
	pq.pop();
	ans.push_back(p.first);
	if(idx[p.second]+1<v[p.second].size())
	{
		pq.push(make_pair(v[p.second][idx[p.second]+1],p.second));
		idx[p.second]+=1;
	}
}
for(auto ele:ans)
{
	cout<<ele<<" ";
}
return 0;
}