#include <bits/stdc++.h>
using namespace std;
const int N=1e5+7;
vector<int> fenwick(N,0);
void update(int idx,int val)
{
	while(idx<=N)
	{
		fenwick[idx]+=val;
		idx=idx+(idx&(-idx));
	}
}
int sum(int idx)
{
	int sum=0;
	while(idx>0)
	{
		sum+=fenwick[idx];
		idx=idx-(idx&(-idx));
	}
	return sum;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int t;
cin>>t;
while(t--)
{
	int n,u;
	cin>>n>>u;
	vector<int> arr(n+1,0);
	while(u--)
	{
		int l,r,val;
		cin>>l>>r>>val;
		l++;
		r++;
		update(l,val);
		update(r+1,-val);

	}
	int q;
	cin>>q;
	while(q--)
	{
		int x;
		cin>>x;
		x++;
		cout<<sum(x)<<endl;
	}
}
return 0;
}