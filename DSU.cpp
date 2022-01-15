#include <bits/stdc++.h>
using namespace std;
int parent[100000];
int rk[100000];
void makeset()
{
	for(int i=0;i<1e5;i++)
	{
		parent[i]=i;
		rk[i]=0;
	}
}
int findpar(int node)
{
	if(node==parent[node])
		return node;
	else
		return parent[node]=findpar(parent[node]);
}
void unn(int x,int y)
{
	int u=findpar(x);
	int v=findpar(y);
	if(rk[u]<rk[v])
	{
		parent[u]=v;
	}
	else if(rk[u]>rk[v])
	{
		parent[v]=u;
	}
	else
	{
		parent[u]=v;
		rk[v]++;
	}
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int m;
cin>>m;
while(m--)
{
	int x,y;
	cin>>x>>y;
	unn(x,y);
}
if(findpar(6)!=findpar(1))
	cout<<"no"<<endl;
else
	cout<<"yes"<<endl;
return 0;
}