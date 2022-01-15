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
int cnt=0;
for(int i=0;i<n;i++)
{
		if(arr[i]==0)
		{
			arr[i]=1;
			cnt++;
			for(int k=i+1;k<n;k++)
		{
			if(arr[k]==0)
			{
				arr[k]=1;
			}
			else
				arr[k]=0;
		}
		}
		
	
}
cout<<cnt;
return 0;
}