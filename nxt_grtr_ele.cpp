#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n)
{
	stack<int>st;
	unordered_map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		while(!st.empty() && st.top()<arr[i])
		{
			mp.insert(make_pair(st.top(),arr[i]));
			st.pop();
		}
		st.push(arr[i]);
	}
	while(!st.empty())
	{
		mp.insert(make_pair(st.top(),-1));
		st.pop();
	}

	for(auto ele:mp)
	{
		cout<<ele.first<<"-->"<<ele.second<<endl;
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
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
solve(arr,n);
return 0;
}