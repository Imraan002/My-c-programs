#include <bits/stdc++.h>
using namespace std;
void change(vector<vector<char>> &vec,int x,int y)
{
	vec[x][y]='*';
	int dx[]={0,0,-1,1};
	int dy[]={1,-1,0,0};
	for(int i=0;i<4;i++)
	{
		int cx=x+dx[i];
		int cy=y+dy[i];
		if(cx>=0 && cx<vec.size() && cy>=0 && cy<vec[0].size() && vec[cx][cy]=='o')
		{
			change(vec,cx,cy);
		}
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
vector<vector<char>> vec(n,vector<char>(m));
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cin>>vec[i][j];
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(i==0 || i==n-1 || j==0 || j==m-1)
		{
			if(vec[i][j]=='o')
			{
				change(vec,i,j);
			}
		}
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(vec[i][j]=='o')
			vec[i][j]='x';
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		if(vec[i][j]=='*')
			vec[i][j]='o';
	}
}
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
		cout<<vec[i][j]<<" ";
	}
	cout<<endl;
}
return 0;
}