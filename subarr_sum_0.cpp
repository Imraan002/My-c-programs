#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n)
{
	int sum=0;
	map<int,int>mp;
	mp[0]=1;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
		if(mp.find(sum)!=mp.end())
		{
			ans+=mp[sum];
			mp[sum]++;
		}
		else
		{
			mp[sum]=1;
		}
	}
	return ans;
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
for(auto &i:arr)
{
	cin>>i;
}	
cout<<solve(arr,n);
return 0;
}