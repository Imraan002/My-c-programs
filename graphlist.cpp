#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
vector<vector<int>>vec(n+1);
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	vec[y].push_back(x);
	
}
vector<int>::iterator it;
for(int i=1;i<n+1;i++)
{
	cout<<i<<"->";
	for(it=vec[i].begin();it!=vec[i].end();it++)
	{
		cout<<*it<<"->";
	}
	cout<<endl;
}

return 0;
}