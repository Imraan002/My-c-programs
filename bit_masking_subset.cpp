#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subset(int arr[],int n)
{
	
	vector<vector<int>> res;
	for(int i=0;i<(1<<n);i++)
	{
		vector<int> temp;
		for(int j=0;j<n;j++)
		{
			if((i&(1<<j))!=0)
			{
				temp.push_back(arr[j]);
			}
		}										//subset generation using bit masking
		res.push_back(temp);
	}
	return res;
}
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
ios::sync_with_stdio(false); cin.tie(0);cout.tie(0);
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
auto ans=subset(arr,n);
for(auto ele:ans)
{
	for(auto k:ele)
	{
		cout<<k<<" ";
	}
	cout<<endl;
}
return 0;
}