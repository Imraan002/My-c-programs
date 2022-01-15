#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> fen(N);
int sum(int idx)
{
	int sum=0;
	while(idx>0)
	{
		sum+=fen[idx];
		idx=idx-(idx&-idx);
	}
	return sum;
}
void update(int idx,int val)
{
	while(idx<=N)
	{
		fen[idx]+=val;
		idx=idx+(idx&-idx);
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
int cnt=0;
int arr[n+1];
for(int i=1;i<=n;i++)
{
	cin>>arr[i];
}
for(int i=1;i<=n;i++)
{
	cnt+=sum(N)-sum(arr[i]);
	update(arr[i],1);
}
cout<<cnt;
return 0;
}