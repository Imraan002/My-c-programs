#include <bits/stdc++.h>
using namespace std;
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
vector<int>ans;
stack<pair<int,int>>st;
for(int i=0;i<n;i++)
{
	int days=1;
	while(!st.empty() && st.top().first < arr[i])
	{
		days+=st.top().second;
		st.pop();

	}
	st.push(make_pair(arr[i],days));
	ans.push_back(days);
}
for(auto ele:ans)
{
	cout<<ele<<" ";
}


return 0;
}