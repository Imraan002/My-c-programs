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
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int currsum=0,maxtillnow=0;
	for(int i=0;i<n;i++)
	{
		currsum+=arr[i];
		maxtillnow=max(maxtillnow,currsum);
		if(currsum<0)
			currsum=0;
	}
	cout<<maxtillnow;
return 0;
}