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
	int n,k;
	cin>>n>>k;
	int arr[n+1];
	for(int i=1;i<=n;i++)
	{
		cin>>arr[i];
	}
	int ans=0;
	for(int i=1;i<=k;i++)
	{
		int j=i;
		int cnt=0;
		map<int,int>mp;
		while(j<=n)
		{
			mp[arr[j]]++;
			cnt++;
			j=j+k;
		}
		int maxele=INT_MIN;;
		for(auto x:mp)
		{
			if(x.second>maxele)
				maxele=x.second;
		}
		ans+=cnt-maxele;
	}
	cout<<ans<<endl;
}
return 0;
}