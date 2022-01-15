#include <bits/stdc++.h>
using namespace std;
const int N=1e5+2;
vector<int> vec[N];
vector<bool> vis(N,0);
void dfs(int node)
{
	vis[node]=true;
	cout<<node<<endl;
	vector<int>::iterator it;
	for(it=vec[node].begin();it!=vec[node].end();it++)
		{
			if(!vis[*it])
				dfs(*it);
		}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	vec[y].push_back(x);
}

dfs(1);
return 0;
}