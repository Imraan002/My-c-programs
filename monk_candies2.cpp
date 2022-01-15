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
	int n,m;
	cin>>n>>m;
	unordered_set<long long>st;
	for(int i=0;i<n;i++)
	{
		long long ele;
		cin>>ele;
		st.insert(ele);
		
	}
	for(int i=0;i<m;i++)
	{
		long long ele;
		cin>>ele;
		if(st.find(ele)!=st.end())
		{
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
			st.insert(ele);
		}

	}

}

return 0;
}