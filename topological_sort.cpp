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
vector<vector<int>> vec(n);
vector<int> indeg(n+1,0);
for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	vec[x].push_back(y);
	indeg[y]++;
	
}
vector<int>::iterator it;
queue<int>q;
for(int i=0;i<n;i++)
{
	if(indeg[i]==0)
	{
		q.push(i);
	}
}
while(!q.empty())
{
	int num=q.front();
	q.pop();
	cout<<num<<" ";
	for(it=vec[num].begin();it!=vec[num].end();it++)
		{
			indeg[*it]--;
			if(indeg[*it]==0)
			{
				q.push(*it);
			}

		}

}
return 0;
}