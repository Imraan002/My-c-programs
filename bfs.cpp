#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
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
vector<bool> vis(N,0);
queue<int>q;
q.push(1);
vis[1]=true;
while(!q.empty())
{
	int num=q.front();
	q.pop();
	cout<<num<<endl;
	for(it=vec[num].begin();it!=vec[num].end();it++)
		{
			if(vis[*it]==0)
			{
				q.push(*it);
				vis[*it]=true;
			}
		}

}
return 0;
}