#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
int tree[4*N];
int lazy_tree[4*N];
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
int lazy_query(int node,int left,int right,int l,int r)
{
	if(lazy_tree[node]!=0)
	{
		tree[node]+=(right-left+1)*lazy_tree[node];
		if(left!=right)
		{
			lazy_tree[2*node+1]+=lazy_tree[node];
			lazy_tree[2*node+2]+=lazy_tree[node];
		}
		lazy_tree[node]=0;
	}

	if(left>=l && right<=r )
		return tree[node];
	else if(left>r || right<l)
		return 0;
	else
	{
		int mid=(left+right)/2;
		int q1=lazy_query(2*node+1,left,mid,l,r);
		int q2=lazy_query(2*node+2,mid+1,right,l,r);
		return q1+q2;
	}
	
}
void lazy_update(int node,int left,int right,int l,int r,int val)
{
	if(lazy_tree[node]!=0)
	{
		tree[node]+=((right-left)+1)*lazy_tree[node];
		if(left!=right)
		{
			lazy_tree[2*node+1]+=lazy_tree[node];
			lazy_tree[2*node+2]+=lazy_tree[node];
		}
		lazy_tree[node]=0;
	}
	if(left>r || right<l )
		return ;
	 if(left>=l && right<=r)
		{
			tree[node]+=(right-left+1)*val;
			if(left!=right)
			{
				lazy_tree[2*node+1]+=val;
				lazy_tree[2*node+2]+=val;
			}
			return;
		}
	else
	{
			int mid=(left+right)/2;
			lazy_update(2*node+1,left,mid,l,r,val);
			lazy_update(2*node+2,mid+1,right,l,r,val);
			tree[node]=tree[2*node+1]+tree[2*node+2];
	}

}
	
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int n;
cin>>n;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
build(0,0,n-1);
int l,r;
cin>>l>>r;
cout<<lazy_query(0,0,n-1,l,r)<<endl;
int s,t,val;
cin>>s>>t>>val;
lazy_update(0,0,n-1,s,t,val);
cout<<lazy_query(0,0,n-1,l,r)<<endl;
lazy_update(0,0,n-1,1,3,2);
cout<<lazy_query(0,0,n-1,0,4);
return 0;
}