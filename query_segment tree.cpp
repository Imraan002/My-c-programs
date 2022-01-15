#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
vector<int> seg_tree(4*N,0);
void build(int node,int left,int right)
{
	if(left==right)
	{
		seg_tree[node]=arr[left];
		return;
	}
	int mid=(left+right)/2;
	build(2*node+1,left,mid);
	build(2*node+2,mid+1,right);
	seg_tree[node]=seg_tree[2*node+1]+seg_tree[2*node+2];
}
int query(int node,int left,int right,int l,int r)
{
	if(left>=l && right<=r)
	{
		return seg_tree[node];
	}
	else if(left>r || right<l)
	{
		return 0;
	}
	else
	{
		int mid=(left+right)/2;
		int q1=query(2*node+1,left,mid,l,r);
		int q2=query(2*node+2,mid+1,right,l,r);
		return q1+q2;
	}
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
{
	cin>>arr[i];
}
build(0,0,n-1);
int l,r;
cin>>l>>r;
cout<<query(0,0,n-1,l,r);
return 0;
}