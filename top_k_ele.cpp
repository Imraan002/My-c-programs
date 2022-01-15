#include <bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
void solve(int arr[],int n,int k)
{
	map<int,int>mp;
	for(int i=0;i<n;i++)
	{
		if(mp[arr[i]]==0 && mp.size()==k+1)
		{
			break;
		}
		
			mp[arr[i]]++;
		
	}
	vector<pair<int,int>>ans;
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		if(it->second!=0)
		ans.push_back(make_pair(it->second,it->first));
	}
	sort(ans.begin(),ans.end(),greater<pair<int,int>>());
	for(auto it=ans.begin();it!=ans.end();it++)
	{
		cout<<it->second<<" ->"<<it->first<<endl;
	}
	
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
int n,k;
cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}	
solve(arr,n,k);
return 0;
}