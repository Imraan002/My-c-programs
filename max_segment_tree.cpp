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
int n;
cin>>n;
for(int i=0;i<n;i++)
{								//maximium in a segment tree and point updation
	cin>>arr[i];
}
build(0,0,n-1);
cout<<query(0,0,n-1,0,4)<<endl;
update(0,0,n-1,3,20);
update(0,0,n-1,2,4);
update(0,0,n-1,4,5);
update(0,0,n-1,4,50);
cout<<query(0,0,n-1,0,4);
cout<<endl;
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

return 0;
}