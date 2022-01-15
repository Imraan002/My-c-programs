#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int arr[],int n,int k)
{
	vector<int>res;
	int sum=0;
	int e,s;
	int i=0;
	for (int i = 0; i < k; ++i)
	{
		sum+=arr[i];
	}
	if(sum%3==0)
	{
		s=0;
		e=k-1;
	}
	for (int j = k; j < n; ++j)
	{
		sum+=arr[j];
		sum-=arr[i++];
		if(sum%3==0)
		{
			s=i;
			e=k;
		}
	}
	for (int i = s; i <= e; ++i)
	{
		res.push_back(arr[i]);
	}
	return res;
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
for (int i = 0; i < n; ++i)
{
	cin>>arr[i];
}
int k;
cin>>k;
vector<int>ans=solve(arr,n,k);
for(auto ele:ans)
{
	cout<<ele<<" ";
}
return 0;
}