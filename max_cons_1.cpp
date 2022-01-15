#include <bits/stdc++.h>
using namespace std;
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
int i=0;
int cnt=0;
int res=INT_MIN;
for(int j=0;j<n;j++)
{
	if(arr[j]==0)
	{
		cnt++;
	}
	while(cnt>k)
	{
		if(arr[i]==0)
		{
			cnt--;
		}
		i++;
	}
	res=max(res,j-i+1);
}

cout<<res<<endl;
return 0;
}