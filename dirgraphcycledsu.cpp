#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

vector<int> parent(N);
vector<int> sze(N);
void make_set(int src)
{
	parent[src]=src;
	sze[src]=1;
}
int find_set(int x)
{
	if(x=parent[x])
		return x;
	else
		return parent[x]=find_set(parent[x]);
}
void make_union(int a,int b)
{
	 a=find_set(a);
	 b=find_set(b);
	if(a!=b)
	{
		if(sze[a]<sze[b])
			swap(a,b);
		parent[b]=a;
		sze[a]+=sze[b];
		
	}
	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
		bool cycle=false;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<N;i++)
	{
		make_set(i);
	}
	vector<vector<int>> vec;
	for(int i=0;i<m;i++)
	{
		int u,v;
		cin>>u>>v;
		vec.push_back({u,v});
	}
	for(auto ele:vec)
	{
		int u=ele[0];
		int v=ele[1];
		int x=find_set(u);
		int y=find_set(v);
		if(x==y)
		{
			cycle=true;
		}
		else{
			make_union(u,v);
		}
		
	}
	if(cycle)
	{
		cout<<"Cycle is present"<<endl;
	}
	else
		cout<<"Cycle is not present"<<endl;
return 0;
}