#include <bits/stdc++.h>
using namespace std;
const int N=1e5;
int arr[N];
int seg_tree[4*N];
void build(int node,int strt,int end)
{
	if(strt==end)
	{
		seg_tree[node]=arr[strt];
		return;
	}
	int mid=(strt+end)/2;
	build(2*node+1,strt,mid);
	build(2*node+2,mid+1,end);
	seg_tree[node]=seg_tree[2*node+1]+seg_tree[2*node+2];
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
for(int i=0;i<17;i++)
{
	cout<<seg_tree[i]<<endl;
}
return 0;
}