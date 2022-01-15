#include <bits/stdc++.h>
using namespace std;

int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int t;
cin>>t;
while(t--)
{
	int n,m,x;
	cin>>n;
	multiset<int>gadget;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		gadget.insert(x);
	}
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>x;
		int cnt=gadget.count(x);
		while(cnt--)
		{
			cout<<x<<" ";
		}
		gadget.erase(x);
	}
	for(auto ele:gadget)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}
return 0;
}