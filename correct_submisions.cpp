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
	map<string,int> mp;
	for(int i=0;i<3*n;i++)
	{
		string str;
		cin>>str;
		int sol;
		cin>>sol;
		mp[str]+=sol;
	}
	multiset<int> st;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		st.insert(it->second);
	}
	for(auto it=st.begin();it!=st.end();it++)
	{
		cout<<*(it)<<" ";
	}
	cout<<endl;
}
return 0;
}