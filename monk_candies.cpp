#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int T;
cin>>T;
while(T--)
{
	long long n,k;
	cin>>n>>k;
	multiset<long long>st;
	for(int i=0;i<n;i++)
	{
		long ele;
		cin>>ele;
		st.insert(ele);
	}
	long long sum=0;
	for(int j=0;j<k;j++)
	{
		auto it=st.end();
		it--;
		long long candies=*it;
		sum+=candies;
		st.erase(it);
		st.insert(candies/2);
	}
	cout<<sum<<endl;
}

return 0;
}