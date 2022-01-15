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
	int n;
	cin>>n;
	vector<int> even;
	vector<int> odd;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x%2==0)
		{
			even.push_back(x);
		}
		else
		{
			odd.push_back(x);
		}
	}
	for(auto ele:even)
	{
		cout<<ele<<" ";
	}
	for(auto ele:odd)
	{
		cout<<ele<<" ";
	}
	cout<<endl;
}
return 0;
}