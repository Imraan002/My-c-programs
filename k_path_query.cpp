#include <bits/stdc++.h>
using namespace std;

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
	int n;
	cin>>n;
	vector<int>par[n+1];
	for(int i=1;i<=n;i++)
	{
		int x,y;
		cin>>x>>y;
		par[x].push_back(y);
	}
	bool ans=true;
	for(auto k:par)
	{
		for(auto t:k)
		{
			cout<<t<<" ";
		}
		cout<<endl;
	}
}
return 0;
}