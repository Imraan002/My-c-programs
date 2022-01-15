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
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int cnt=0;
	int i;
	for( i=0;i<n;i++)
	{
		if(cnt==7)
			break;
		if(arr[i]==1|| arr[i]==2 || arr[i]==3 || arr[i]==4 ||arr[i]==5 || arr[i]==6 ||arr[i]==7)
			cnt++;
	}
	cout<<i<<endl;
}
return 0;
}