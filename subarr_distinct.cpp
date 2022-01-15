#include <bits/stdc++.h>
using namespace std;
void solve(int arr[],int n,int k )
{
	
	map<int,int> mp;
	for(int i=0;i<k;i++)
	{
		mp[arr[i]]++;
	}
	cout<<mp.size()<<" ";
	for(int i=k;i<n;i++)
	{
		mp[arr[i-k]]--;
		if(mp[arr[i-k]]==0)					//k size subarr with distinct elements
			mp.erase(arr[i-k]);
		mp[arr[i]]++;
		cout<<mp.size()<<" ";
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
int k;
cin>>k;
solve(arr,n,k);
return 0;
}