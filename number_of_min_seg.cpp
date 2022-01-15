#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
pair<int,int> tree[4*N];
void build(int node,int left,int right)
{
	if(left==right)
	{
		tree[node].first=arr[left];
		tree[node].second=1;
		return;
	}
	int mid=(left+right)/2;
	build(2*node+1,left,mid);
	build(2*node+2,mid+1,right);
	if(tree[2*node+1].first<tree[2*node+2].first)
	{
		tree[node].first=tree[2*node+1].first;
		tree[node].second=tree[2*node+1].second;
	}
	else if(tree[2*node+2].first<tree[2*node+1].first)
	{
		tree[node].first=tree[2*node+2].first;
		tree[node].second=tree[2*node+2].second;
	}
	else
	{
		tree[node].first=tree[2*node+1].first;
		tree[node].second=tree[2*node+1].second+tree[2*node+2].second;
	}
}
pair<int,int> query(int node,int left,int right,int l,int r)
{
	if(left>=l && right<=r )
		return tree[node];
	if(left>r || right<l)
		return {INT_MAX,-1};
	int mid=(left+right)/2;
	pair<int,int> q1=query(2*node+1,left,mid,l,r);
	pair<int,int> q2=query(2*node+2,mid+1,right,l,r);
	pair<int,int> res;
	if(q1.first<q2.first)
	{
		res=q1;
	}
	else if(q2.first<q1.first)
	{
		res=q2;
	}
	else{
		res.first=q1.first;
		res.second=q1.second+q2.second;
	}
	return res;
}
void update(int node,int left,int right,int idx,int val)
{
	if(left==right)
	{
		arr[idx]=val;
		tree[node].first=val;
		tree[node].second=1;
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
	if(tree[2*node+1].first<tree[2*node+2].first)
	{
		tree[node].first=tree[2*node+1].first;
		tree[node].second=tree[2*node+1].second;
	}
	else if(tree[2*node+2].first<tree[2*node+1].first)
	{
		tree[node].first=tree[2*node+2].first;
		tree[node].second=tree[2*node+2].second;
	}
	else
	{
		tree[node].first=tree[2*node+1].first;
		tree[node].second=tree[2*node+1].second+tree[2*node+2].second;
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
	 	int l,r;
	 	cin>>l>>r;
	 	pair<int,int> ans=query(0,0,n-1,l,r-1);
	 	cout<<ans.first<<" "<<ans.second<<endl;
	 }
}
return 0;
}