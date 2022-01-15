#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void subset(vector<int> &res,int i,vector<int> &v)
{
	if(i==v.size())
	{
		ans.push_back(res);
		return;
	}
	subset(res,i+1,v);
	res.push_back(v[i]);
	subset(res,i+1,v);
	res.pop_back();
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++)
{
	cin>>v[i];
}
vector<int>res;
subset(res,0,v);
for(auto ele:ans)
{
	for(auto k:ele)
	{
		cout<<k<<" ";
	}
	cout<<endl;
}
return 0;
}