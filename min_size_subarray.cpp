#include <bits/stdc++.h>
using namespace std;
int solve(int arr[],int n,int x)
{
	int ans=INT_MAX;
	int sum=0;
	int i=0;
	int j=0;
	while(j<n)
	{
		sum+=arr[j];
		if(sum>x)
		{
			ans=min(ans,j-i+1);
			while(sum>x)
			{
				sum-=arr[i++];
				if(sum>x)
				{
					ans=min(ans,j-i+1);
				}
			
			}
		}
		j++;
	}
	return ans;
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
int x;
cin>>x;
cout<<solve(arr,n,x);

return 0;
}