#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	int n,k;
	cin>>n;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	int cnt=0;
	priority_queue<int> pq;
	for(int i=0;i<n;i++)
	{
		pq.push(arr[i]);
	}
	while(!pq.empty() & sum<k)
	{
		sum+=pq.top();
		pq.pop();
		cnt++;
		
	}
	cout<<cnt;
}