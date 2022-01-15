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
int ans=0;
vector<int>v(n);
for(int i=0;i<n;i++)
{
	int x;
	cin>>x;
	v.push_back(x);
}
//sort(v.begin(),v.end(),greater<int>());
reverse(v.begin(),v.end());
int x;
cin>>x;
for(int i=0;i<n;i++)
{
	 ans+=x/v[i];
	 x-=x/v[i]*v[i];
}
cout<<ans;
return 0;
}