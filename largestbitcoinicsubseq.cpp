#include <bits/stdc++.h>
using namespace std;
int bitcoinic(int arr[],int n)
{
	int lcsi[n+1];
	int lcsd[n+1];
	lcsi[0]=1;
	lcsd[0]=1;
	
	for(int i=1;i<=n;i++)
	{
		int maxi=0;
		for(int j=0;j<i;j++)
		{
			if(arr[j]<=arr[i])
			{
				if(lcsi[j]>maxi)
				{
					maxi=lcsi[j];
				}
			}
		}
		lcsi[i]=maxi+1;
	}
	
	for(int i=n;i>=0;i--)
	{
		int maxd=0;
		for(int j=n;j>i;j--)
		{
			if(arr[j]<=arr[i])
			{
				if(lcsd[j]>maxd)
				{
					maxd=lcsd[j];
				}
			}
		}
		lcsd[i]=maxd+1;
	}
	int maxo=INT_MIN;
	for(int i=0;i<n;i++)
	{
		maxo=max(maxo,lcsi[i]+lcsd[i]-1);
	}
	return maxo;

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
cout<<bitcoinic(arr,n);
return 0;
}