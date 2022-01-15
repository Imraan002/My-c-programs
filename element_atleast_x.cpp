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
	tree[node]=max(tree[2*node+1],tree[2*node+2]);
}
int query(int node,int left,int right,int l,int r)
{
	if(left>=l && right<=r )
		return tree[node];
	if(left>r || right<l)
		return INT_MIN;
	int mid=(left+right)/2;
	int q1=query(2*node+1,left,mid,l,r);
	int q2=query(2*node+2,mid+1,right,l,r);
	return max(q1,q2);
}
void update(int node,int left,int right,int idx,int val)
{
	if(left==right)
	{
		arr[idx]=val;
		tree[node]=val;
		return;
	}
	int mid=(left+right)/2;
	if(idx<=mid)
	{
		update(2*node+1,left,mid,idx,val);
	}
	else if(idx>mid)
	{
		update(2*node+2,mid+1,right,idx,val);
	}
	tree[node]=max(tree[2*node+1],tree[2*node+2]);
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
		int idx,val;
		cin>>idx>>val;
		update(0,0,n-1,idx,val);
	}
	else if(type==2)
	{
		int x;
		cin>>x;
		int ans=INT_MAX;
		int low=0;
		int high=n-1;
		while(low<=high)
		{
			int mid=(low+high)/2;
			int q=query(0,0,n-1,low,mid);
			if(q<x)
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
				ans=min(ans,mid);
			}
		}
		if(ans==INT_MAX)
			cout<<-1<<endl;
		else
			cout<<ans<<endl;
	}
}
return 0;
}