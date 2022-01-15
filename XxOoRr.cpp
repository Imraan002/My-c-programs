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
	int arr[n];
	int ans=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int cnt;
	for(int i=0;i<32;i++)
	{
		cnt=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]!=0)
			{
				if(arr[j]&1)
				{
					cnt++;
				}
			}
			arr[j]=arr[j]/2;
		}
		if(cnt%k==0)
		{
			ans+=cnt/k;
		}
		else
		{
			ans+=cnt/k+1;
		}
	}
	cout<<ans<<endl;
}
return 0;
}