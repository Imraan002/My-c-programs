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
vector<vector<int>>v(n+1,vector<int>(n+1,0));

for(int i=0;i<m;i++)
{
	int x,y;
	cin>>x>>y;
	v[x][y]=1;
	v[y][x]=1;
}
for(int i=1;i<n+1;i++)
{
	for(int j=1;j<v[i].size();j++)
	{
		cout<<v[i][j]<<" ";
	}
	cout<<endl;
}

return 0;
}