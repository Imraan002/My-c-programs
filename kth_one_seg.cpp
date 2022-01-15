#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
int tree[4*N];
void build(int node,int left,int right)
{
	if(left==right)
	{
		tree[node]=arr[left];
		return;
	}
	int mid=(left+right)/2;
	build(2*node+1,left,mid);
	build(2*node+2,mid+1,right);
	tree[node]=tree[2*node+1]+tree[2*node+2];
}
int query(int node,int left,int right,int k)
{
	if(left==right)
	{
		return left;
	}
	int mid=(left+right)/2;
	if(k<tree[2*node+1])
	{
		 return query(2*node+1,left,mid,k);
	}
	else
	{
		return query(2*node+2,mid+1,right,k-tree[2*node+1]);
	}
}
void update(int node,int left,int right,int idx)
{
	if(left==right)
	{
		if(arr[left]==0)
		{
			arr[left]=1;
			tree[node]=1;
		}
		else
		{
			arr[left]=0;
			tree[node]=0;
		}
		return;
	}
	int mid=(left+right)/2;
	if(idx<=mid)
	{
		update(2*node+1,left,mid,idx);
	}
	else if(idx>mid)
	{
		update(2*node+2,mid+1,right,idx);
	}
	tree[node]=tree[2*node+1]+tree[2*node+2];
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,m;
cin>>n>>m;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
build(0,0,n-1);
while(m--)
{
	int type;
	cin>>type;
	if(type==1)
	{
		int idx;
		cin>>idx;
		update(0,0,n-1,idx);
	}
	else
	{
		int k;
		cin>>k;
		int ans=query(0,0,n-1,k);
		cout<<ans<<endl;
	}
}
return 0;
}