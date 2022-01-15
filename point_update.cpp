#include<bits/stdc++.h>
using namespace std;
int arr[500000];
int seg[4*500000];
int lazy[4*500000];
void build(int idx,int low,int high)
{
	if(low==high)
	{
		seg[idx]=arr[low];
		return;
	}
	int mid=(low+high)/2;
	build(2*idx+1,low,mid);
	build(2*idx+2,mid+1,high);
	seg[idx]=seg[2*idx+1]+seg[2*idx+2];
};
int query(int idx,int low,int high,int l,int r)
{
	if(low>=l && high<=r)
	{
		return seg[idx];
	}
	else if(low>r || high<l)
	{
		return 0;
	}

		int mid=(low+high)/2;
		int left=query(2*idx+1,low,mid,l,r);
		int right=query(2*idx+2,mid+1,high,l,r);
		return left+right;
	
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
	int q;
	cin>>q;
	while(q--)
	{
		int l,r;
		cin>>l>>r;
		cout<<query(0,0,n-1,l,r)<<endl;
	}
}